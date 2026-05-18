
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42039492(uint param_1,undefined4 param_2,undefined1 param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,uint param_8,uint param_9)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if ((int)param_9 < 2) {
    FUN_ram_420391da(param_3,param_9 & 0xff);
  }
  if (param_4 != 2) {
    thunk_EXT_FUN_ram_40011e74(param_9);
    bVar1 = _DAT_ram_3fcb5134 == 0;
    iVar3 = FUN_ram_420391f4(0,param_2);
    FUN_ram_42049a48(0,param_1 & 0xff,param_3,param_2,param_9 & 0xff,param_7,param_8 & 0xff,bVar1,
                     iVar3 != 0);
    if (param_4 == 0) {
      return 0;
    }
  }
  FUN_ram_4204ab9e();
  puVar2 = (undefined2 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x168))(param_8 + 0xa8);
  if (puVar2 == (undefined2 *)0x0) {
    return 0x101;
  }
  FUN_ram_42039462();
  FUN_ram_42039176(param_9 & 0xff,puVar2);
  *(uint *)(puVar2 + 0x52) = param_8;
  FUN_ram_40399daa(puVar2 + 0x54,param_7,param_8);
  if (param_1 == 2) {
    iVar3 = gp + 0x8c;
  }
  else if (param_1 == 3) {
    iVar3 = gp + -0x1a8;
  }
  else {
    if ((param_1 & 0xfffffffb) != 1) {
      if (param_1 == 4) {
        return 0xffffffff;
      }
      goto LAB_ram_42039576;
    }
    iVar3 = gp + 0xb4;
  }
  *(int *)(puVar2 + 0x50) = iVar3;
LAB_ram_42039576:
  *puVar2 = (short)param_9;
  FUN_ram_40399daa(puVar2 + 0x4c,param_5,8);
  return 0;
}

