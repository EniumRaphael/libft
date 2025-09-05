/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:18:17 by rparodi           #+#    #+#             */
/*   Updated: 2025/09/05 16:26:36 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include <stddef.h>

/**
 * @brief Compares two memory blocks
 * 
 * @param s1 Pointer to the first memory area
 * @param s2 Pointer to the second memory area
 * @param n Number of bytes to compare
 * 
 * @return An integer indicating the relationship between the two memory areas:
 *         - `< 0` if `s1` is less than `s2`
 *         - `0` if `s1` equals `s2`
 *         - `> 0` if `s1` is greater than `s2`
 */
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
 * @brief Allocates and zeroes memory for an array
 *
 * @param nmemb Number of elements to allocate
 * @param size Size of each element in bytes
 */
void	*ft_calloc(size_t nmemb, size_t size);

/**
 * @brief Scans memory for a byte
 * 
 * @param s Pointer to the memory area to scan
 * @param c Byte value to search for
 * @param n Number of bytes to scan in s
 * 
 * @return A pointer to the matching byte in memory, or NULL if the byte
is not found within the first n bytes
 */
void	*ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Copies memory from source to destination
 * 
 * @param dest Pointer to the destination memory area
 * @param src Pointer to the source memory area
 * @param n Number of bytes to copy from src to dest
 * 
 * @return A pointer to the destination memory area dest
 */
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
 * @brief Copies memory with overlap handling
 * 
 * @param dest Pointer to the destination memory area
 * @param src Pointer to the source memory area
 * @param n Number of bytes to copy from src to dest
 * 
 * @return A pointer to the destination memory area dest
 */
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
 * @brief Fills a block of memory with a specified byte
 * 
 * @param s Pointer to the memory area to fill
 * @param c Byte value to be set in the memory
 * @param n Number of bytes to be set to the value c
 * 
 * @return A pointer to the memory area s
 */
void	*ft_memset(void *s, int c, size_t n);

/**
 * @brief Sets a block of memory to zero
 *
 * @param s Pointer to the memory area to be set at zero
 * @param n Number of bytes to set to zero
 */
void	ft_bzero(void *s, size_t n);

#endif
