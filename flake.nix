{
  description = "Flake for 42 C";

  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    c_formatter_42.url = "github:maix0/c_formatter_42-flake";
  };
  outputs = { self, nixpkgs, flake-utils, c_formatter_42, }:
    flake-utils.lib.eachDefaultSystem (system:
      let pkgs = nixpkgs.legacyPackages.${system};
      in {
        devShell = pkgs.mkShell {
          packages = [
            c_formatter_42.packages.${system}.default
            pkgs.clang
            pkgs.clang-tools
            pkgs.fastmod
            pkgs.norminette
            pkgs.valgrind
            pkgs.tree
          ] ++ (if pkgs.stdenv.isLinux then [ pkgs.valgrind ] else [ ]);
        };
      });
}
