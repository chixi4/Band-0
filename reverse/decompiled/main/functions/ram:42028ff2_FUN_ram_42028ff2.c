
void FUN_ram_42028ff2(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined1 auStack_8c [7];
  undefined1 uStack_85;
  undefined1 auStack_84 [7];
  undefined1 auStack_7d [21];
  undefined1 auStack_68 [10];
  undefined1 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [56];
  uint uStack_18;
  
  iVar1 = FUN_ram_4202d598(param_2,1);
  *param_3 = iVar1;
  if (iVar1 != 0) {
    return;
  }
  pbVar2 = *(byte **)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar1 = thunk_FUN_ram_420365de(param_1);
  if ((*(byte *)(iVar1 + 0x34) & 1) == 0) {
    *param_3 = 0x407;
    *(undefined1 *)(param_3 + 1) = 7;
  }
  else {
    FUN_ram_42036658(iVar1,auStack_84);
    uStack_85 = 0;
    FUN_ram_4039c11e(auStack_8c,auStack_7d,7);
  }
  thunk_FUN_ram_4202b7f6();
  if (*param_3 != 0) {
    return;
  }
  if ((*pbVar2 & 1) == 0) {
    iVar1 = 5;
  }
  else {
    iVar1 = FUN_ram_4202ce90(auStack_8c,auStack_68);
    *param_3 = iVar1;
    if (((iVar1 != 0) || ((*pbVar2 & 4) == 0)) || ((uStack_18 & 1) != 0)) goto LAB_ram_42029050;
    iVar1 = 0x10;
  }
  *param_3 = iVar1;
LAB_ram_42029050:
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420279b4(param_1,0xff,0xffffffff,0);
  thunk_FUN_ram_4202b7f6();
  if (iVar1 == 0) {
    if (*param_3 == 0) {
      iVar1 = FUN_ram_42028f30(param_1,uStack_5e,auStack_50,uStack_5c,uStack_58,uStack_54,
                               uStack_18 & 1);
    }
    else {
      iVar1 = FUN_ram_42028e04(param_1);
    }
    *param_3 = iVar1;
  }
  else {
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x10;
  }
  return;
}

