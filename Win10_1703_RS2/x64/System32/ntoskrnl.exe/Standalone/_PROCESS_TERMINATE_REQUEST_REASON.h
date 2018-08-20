typedef enum _PROCESS_TERMINATE_REQUEST_REASON
{
  ProcessTerminateRequestReasonNone = 0,
  ProcessTerminateCommitFail = 1,
  ProcessTerminateRfgViolation = 2,
  ProcessTerminateRfgAttachedViolation = 3,
  ProcessTerminateRequestReasonMax = 4,
} PROCESS_TERMINATE_REQUEST_REASON, *PPROCESS_TERMINATE_REQUEST_REASON;

