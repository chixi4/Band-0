
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4207d916(undefined4 param_1,uint param_2,undefined1 param_3,undefined2 param_4,int param_5,
                int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  if (param_2 < 0x54) {
    if (param_5 <= param_6) {
      iVar1 = FUN_ram_4039c11e(_DAT_ram_3fcc2a14 + param_2 * 0x34,param_1,0x20);
      *(char *)(iVar1 + 0x20) = (char)param_2;
      *(undefined1 *)(iVar1 + 0x21) = param_3;
      *(undefined2 *)(iVar1 + 0x22) = param_4;
      *(int *)(iVar1 + 0x24) = param_5;
      *(short *)(iVar1 + 0x28) = (short)param_6;
      *(undefined4 *)(iVar1 + 0x2c) = param_7;
      *(undefined4 *)(iVar1 + 0x30) = param_8;
      return 0;
    }
    FUN_ram_4207a038(1,1,1,&DAT_ram_3c0fe8cc);
  }
  else {
    FUN_ram_4207a038(1,1,1,&DAT_ram_3c0fe8ac,param_2);
  }
  return 0x102;
}

