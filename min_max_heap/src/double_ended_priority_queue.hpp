#pragma once

/**
 * \brief Defines the interface for a double-ended priority queue.
 * \detail A double-ended priority queue defines the interface for a data structure
 *		   which allows for efficient removal of both the minimum and maximum elements.
 * \tparam T The type of the elements in the collection.
 */
template <typename T>
class DoubleEndedPriorityQueue {

public:

	/** \brief Adds an element onto the double-ended priority queue. */
	virtual void add(const T&) = 0;

	/**
	 * \brief Removes the minimum element from the double-ended priority queue.
	 * \return The minimum element in the priority queue.
	 */
	virtual T remove_min() = 0;

	/**
	 * \brief Removes the maximum element from the double-ended priority queue.
	 * \return The maximum element in the double-ended priority queue.
	 */
	virtual T remove_max() = 0;

	/**
	 * \brief Gets the minimum element in the double-ended priority queue.
	 * \return A constant reference to the minimum element in the double-ended priority queue.
	 */
	virtual const T& min() const = 0;

	/**
	 * \brief Gets the maximum element in the double-ended priority queue.
	 * \return A constant reference to the maximum element in the double-ended priority queue.
	 */
	virtual const T& max() const = 0;

	/**
	 * \brief Gets the number of elements in the double-ended priority queue.
	 * \return The number of elements in the double-ended priority queue.
	 */
	virtual size_t size() const = 0;

protected:

	/** \brief Initializes a double-ended priority queue. */
	DoubleEndedPriorityQueue() = default;

	/** \brief Initializes a double-ended priority queue using copy construction. */
	DoubleEndedPriorityQueue(const DoubleEndedPriorityQueue&) = default;

	/** \brief Initializes a double-ended priority queue using move construction. */
	DoubleEndedPriorityQueue(DoubleEndedPriorityQueue&&) noexcept = default;

	/**
	 * \brief Initializes a double-ended priority queue using copy assignment.
	 * \return A reference to the initialized double-ended priority queue.
	 */
	DoubleEndedPriorityQueue& operator=(const DoubleEndedPriorityQueue&) = default;

	/**
	 * \brief Initializes a double-ended priority queue using move assignment.
	 * \return A reference to the initialized double-ended priority queue.
	 */
	DoubleEndedPriorityQueue& operator=(DoubleEndedPriorityQueue&&) noexcept = default;

	/** \brief Destroys the double-ended priority queue. */
	virtual ~DoubleEndedPriorityQueue() = default;
};