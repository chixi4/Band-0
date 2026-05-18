
int FUN_ram_420730d4(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int iStack_68;
  uint uStack_64;
  int iStack_60;
  int iStack_5c;
  undefined1 auStack_58 [52];
  
  iVar1 = param_3;
  while( true ) {
    pbVar3 = (byte *)*param_1;
    if (param_2 <= pbVar3) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
      iVar1 = -0x2566;
      if (pbVar3 == param_2) {
        iVar1 = 0;
      }
      return iVar1;
    }
    (*(code *)&SUB_ram_40010488)(auStack_58,0,0x28);
    uStack_64 = (uint)*pbVar3;
    *param_1 = (int)(pbVar3 + 1);
    iVar2 = FUN_ram_4202b8a0(param_1,param_2,&iStack_68);
    if (iVar2 != 0) {
      return iVar2 + -0x2500;
    }
    iStack_5c = *param_1;
    iStack_60 = iStack_68;
    if ((uStack_64 & 0xc0) != 0x80) {
      return -0x2562;
    }
    iVar2 = FUN_ram_42072e9a(&uStack_64,auStack_58);
    if ((iVar2 != 0) && (iVar2 != -0x2080)) break;
    FUN_ram_420730c4(auStack_58);
    iVar2 = iVar1;
    if (*(int *)(iVar1 + 8) != 0) {
      if (*(int *)(iVar1 + 0xc) != 0) {
        return -0x2500;
      }
      iVar2 = FUN_ram_4202939a(1,0x10);
      *(int *)(iVar1 + 0xc) = iVar2;
      if (iVar2 == 0) {
        return -0x256a;
      }
    }
    FUN_ram_40399daa(iVar2,&uStack_64);
    *param_1 = *param_1 + iStack_60;
    iVar1 = iVar2;
  }
  FUN_ram_4202bb8c(*(undefined4 *)(param_3 + 0xc));
  *(undefined4 *)(param_3 + 0xc) = 0;
  return iVar2;
}

