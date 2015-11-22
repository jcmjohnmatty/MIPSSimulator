#ifndef __MIPSSIMULATOR_OS_OS_HPP_
#define  __MIPSSIMULATOR_OS_OS_HPP_

#include <processor/clock.hpp>
#include <processor/memory.hpp>
#include <processor/processor.hpp>

class OS
{
public:
	// CONSTRUCTORS

	/**
	 * @brief Construct the OS.
	 *
	 * @param[in] clock     The clock assosiated with this system.
	 * @param[in] processor The processor this <code>OS</code> is
	 *                                   running on.
	 * @param[in] memory    The memory assosiated with this system.
	 */
	OS (Clock& clock, MIPSProcessor& processor, Memory& memory);

	// DESTRUCTORS

	/**
	 * Destructor.
	 */
	~OS ();

	// FUNCTIONS

	/**
	 * @brief Begin execution.
	 */
	void
	execute ();

private:
	// VARIABLES

	/** THe clock assosiated with this system. */
	Clock& m_clock;
	/** The processor this <code>OS</code> is running on. */
	MIPSProcessor& m_processor;
	/** THe memory for this system. */
	Clock& m_memory;
};

extern OS* os;

#endif //  __MIPSSIMULATOR_OS_OS_HPP_
