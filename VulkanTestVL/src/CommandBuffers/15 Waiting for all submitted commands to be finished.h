
#ifndef WAITING_FOR_ALL_SUBMITTED_COMMANDS_TO_BE_FINISHED
#define WAITING_FOR_ALL_SUBMITTED_COMMANDS_TO_BE_FINISHED

#include "common.h"

namespace VulkanLibrary {

  bool WaitForAllSubmittedCommandsToBeFinished( VkDevice logical_device );

} // namespace VulkanLibrary

#endif // WAITING_FOR_ALL_SUBMITTED_COMMANDS_TO_BE_FINISHED