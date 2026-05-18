
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42044cf8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,code *param_5,
                undefined2 param_6)

{
  int unaff_retaddr;
  int unaff_s0;
  byte unaff_s1;
  
  if (param_3 == 0) {
    (*(code *)(unaff_retaddr + 0x428U & 0xfffffffe))();
    *(byte *)(unaff_s0 + 0x16) = *(byte *)(unaff_s0 + 0x16) & 0xfe | unaff_s1 & 1;
    *(int *)(unaff_s0 + 0x18) = _DAT_ram_3fcb6a38;
    _DAT_ram_3fcb6a38 = unaff_s0;
    return 0;
  }
  *(undefined2 *)(param_4 + 0x10) = param_6;
  (*param_5)();
  return 0;
}

