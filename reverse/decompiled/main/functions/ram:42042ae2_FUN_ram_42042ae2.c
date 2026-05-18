
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042ae2(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == 5) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0xa89,&DAT_ram_3c0f6e40,5,0,param_5,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  if ((*(char *)(param_1 + 0x50) == -1) &&
     (iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x444))(param_1,param_2), iVar1 != 0)) {
    *(char *)(param_1 + 0x50) = (char)param_2;
    if ((param_2 != 1) && (1 < param_2 - 0xc)) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x4b8))(param_1);
    }
    if ((_DAT_ram_3fcdfe70 != 0) && (*(int *)(_DAT_ram_3fcdfe70 + 0x14) != 0)) {
      (**(code **)(_DAT_ram_3fcdfed0 + 0x25c))(param_1,4);
    }
  }
  *(ushort *)(param_1 + 0x5c) = (ushort)(1 << (param_2 & 0x1f)) | *(ushort *)(param_1 + 0x5c);
  return;
}

