
int FUN_ram_42064faa(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 != 0) {
    uStack_1c = 1;
    iStack_18 = param_2;
    uStack_14 = param_3;
    iVar1 = FUN_ram_42066a52(*(undefined4 *)(param_1 + 0x68),*(undefined2 *)(param_1 + 0x1a),
                             &uStack_1c,0xc);
    return iVar1 >> 0x1f;
  }
  return 0x102;
}

