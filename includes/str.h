/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:04:59 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 16:19:06 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <stddef.h>

/**
 * @brief Splits a string into an array of substrings based on a delimiter.
 * 
 * @param s The string to split.
 * @param c The delimiter character.
 * 
 * @return A NULL-terminated array of substrings,
 * or NULL if memory allocation fails.
 */
char	**ft_split(char const *s, char c);

/**
 * @brief Locates the first occurrence of a character in a string.
 * 
 * @param s The string to search.
 * @param c The character to locate.
 * 
 * @return A pointer to the matched character,
 * or NULL if it does not appear in `s`.
 */
char	*ft_strchr(const char *s, int c);

/**
 * @brief Copies a string.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * 
 * @return A pointer to `dst`.
 */
char	*ft_strcpy(char *dst, const char *src);

/**
 * @brief Duplicates a string.
 * 
 * @param s1 The string to duplicate.
 * 
 * @return A pointer to the duplicated string,
 * or NULL if memory allocation fails.
 */
char	*ft_strdup(const char *s);

/**
 * @brief Joins two strings into a new string.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * 
 * @return A pointer to the new concatenated string,
 * or NULL if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Applies a function to each character of a string.
 * 
 * @param s The input string.
 * @param f The function to apply to each character.
 * 
 * @return A pointer to the newly created string,
 * or NULL if memory allocation fails.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
 * @brief Copies a string.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * @param size The size to copy
 * 
 * @return A pointer to `dst`.
 */
char	*ft_strncpy(char *dst, const char *src, size_t size);

/**
 * @brief Locates a substring within a string, up to a specified length.
 * 
 * The `ft_strnstr` function locates the first occurrence of the null-terminated
 * string `needle` within the string `haystack`,
 * searching only up to `len` characters.
 * 
 * @param big The string to search.
 * @param little The substring to locate.
 * @param len The maximum number of characters to search.
 * 
 * @return A pointer to the beginning of the located substring,
 * or NULL if `needle` is not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len);

/**
 * @brief Locates the last occurrence of a character in a string.
 * 
 * @param s The string to search.
 * @param c The character to locate.
 * 
 * @return A pointer to the matched character,
 * or NULL if it does not appear in `s`.
 */
char	*ft_strrchr(const char *s, int c);

/**
 * @brief Trims specified characters from the start and end of a string.
 * 
 * @param s1 The string to trim.
 * @param set The set of characters to remove.
 * 
 * @return A pointer to the trimmed string, or NULL if memory allocation fails.
 */
char	*ft_strtrim(char const *s1, char const *set);

/**
 * @brief Extracts a substring from a string.
 * 
 * @param s The source string.
 * @param start The starting index of the substring.
 * @param len The maximum length of the substring.
 * 
 * @return A pointer to the substring, or NULL if memory allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Compares two strings lexicographically.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * 
 * @return An integer indicating the relationship between the two strings:
 *         - `< 0` if `s1` is less than `s2`.
 *         - `0` if `s1` equals `s2`.
 *         - `> 0` if `s1` is greater than `s2`.
 */
int	ft_strcmp(const char *s1, const char *s2);

/**
 * @brief Compares two strings up to a specified number of characters.
 * 
 * @param s1 The first string to compare.
 * @param s2 The second string to compare.
 * @param n The maximum number of characters to compare.
 * 
 * @return An integer indicating the relationship between the two strings.
 */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Appends a string with size limit.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * 
 * @return The total length of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size);

/**
 * @brief Copies a string with size limit.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * @param size The maximum number of characters to copy.
 * 
 * @return The total length of `src`.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

/**
 * @brief Computes the length of a string.
 * 
 * @param s The input string.
 * 
 * @return The number of characters in the string `s`.
 */
size_t	ft_strlen(const char *s);

/**
 * @brief Applies a function to each character of a string.
 * 
 * @param s The string to modify.
 * @param f The function to apply to each character.
 * 
 * @return void
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

#endif
