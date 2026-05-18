
undefined4
FUN_ram_420376e0(int param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 param_5,
                undefined1 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *(short *)(param_1 + 8) = (short)param_2;
  *(undefined1 *)(param_1 + 10) = param_6;
  *(short *)(param_1 + 4) = (short)param_2;
  *(undefined4 **)(param_1 + 0xc) = param_4;
  *(undefined4 *)(param_1 + 0x18) = param_5;
  *(undefined4 **)(param_1 + 0x14) = param_4;
  if (param_2 != 0) {
    if ((param_3 & 3) != 0) {
      param_3 = (param_3 & 0xfffffffc) + 4;
    }
    puVar1 = param_4;
    iVar3 = 1;
    if (param_2 != 1) {
      do {
        iVar2 = iVar3;
        *puVar1 = (undefined4 *)((int)puVar1 + param_3);
        iVar3 = iVar2 + 1;
        puVar1 = (undefined4 *)((int)puVar1 + param_3);
      } while (iVar3 != param_2);
      param_4 = (undefined4 *)((int)param_4 + iVar2 * param_3);
    }
    *param_4 = 0;
  }
  return param_8;
}

