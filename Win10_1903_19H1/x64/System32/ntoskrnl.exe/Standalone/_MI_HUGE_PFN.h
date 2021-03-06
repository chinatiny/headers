typedef struct _MI_HUGE_PFN
{
  union
  {
    union
    {
      struct
      {
        /* 0x0000 */ unsigned __int64 EntireField;
      } /* size: 0x0008 */ e1;
      struct
      {
        struct /* bitfield */
        {
          /* 0x0000 */ unsigned __int64 Flink : 18; /* bit position: 0 */
          /* 0x0000 */ unsigned __int64 PageState : 2; /* bit position: 18 */
          /* 0x0000 */ unsigned __int64 Blink : 18; /* bit position: 20 */
          /* 0x0000 */ unsigned __int64 WriteInProgress : 1; /* bit position: 38 */
          /* 0x0000 */ unsigned __int64 HasError : 1; /* bit position: 39 */
          /* 0x0000 */ unsigned __int64 Partition : 11; /* bit position: 40 */
          /* 0x0000 */ unsigned __int64 NodeNumber : 6; /* bit position: 51 */
          /* 0x0000 */ unsigned __int64 Reserved : 7; /* bit position: 57 */
        }; /* bitfield */
      } /* size: 0x0008 */ e2;
    }; /* size: 0x0008 */
  } /* size: 0x0008 */ u1;
} MI_HUGE_PFN, *PMI_HUGE_PFN; /* size: 0x0008 */

