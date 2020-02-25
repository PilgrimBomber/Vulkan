
#ifndef WAITING_UNTIL_ALL_COMMANDS_SUBMITTED_TO_A_QUEUE_ARE_FINISHED
#define WAITING_UNTIL_ALL_COMMANDS_SUBMITTED_TO_A_QUEUE_ARE_FINISHED

#include "common.h"

namespace VulkanLibrary {

  bool WaitUntilAllCommandsSubmittedToQueueAreFinished( VkQueue queue );

} // namespace VulkanLibrary

#endif // WAITING_UNTIL_ALL_COMMANDS_SUBMITTED_TO_A_QUEUE_ARE_FINISHED