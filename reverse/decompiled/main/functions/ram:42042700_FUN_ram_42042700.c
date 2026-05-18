
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042700(uint *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(_DAT_ram_3fcdfecc + 0x4c4))();
  if ((param_1[0x17] & 8) != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x450))(param_1,3);
  }
  if ((int)(*param_1 << 2) < 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x700))(param_1,0);
    *param_1 = *param_1 & 0xdfffffff;
  }
  iVar1 = _DAT_ram_3fcb6a18;
  if (((((*(uint *)(*(int *)(_DAT_ram_3fcdff6c + 0x1c) + 0x38) & 1) != 0) &&
       (*(char *)((int)param_1 + 0xb) == '\x01')) && (0xb < _DAT_ram_3fcdfe60)) &&
     ((char)param_1[0x16] < '\0')) {
    *(undefined1 *)(param_1 + 0x7b) = 1;
    iVar2 = _DAT_ram_3fcdfecc;
    *(undefined1 *)((int)param_1 + 0x1ed) = *(undefined1 *)(iVar1 + 1);
    *(undefined1 *)((int)param_1 + 0x1ee) = *(undefined1 *)(iVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x420427bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar2 + 0x44c))(param_1,0xc);
    return;
  }
  return;
}

