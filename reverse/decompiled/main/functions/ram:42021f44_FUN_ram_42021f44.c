
int FUN_ram_42021f44(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_c8 [184];
  
  iVar1 = 0x102;
  if (((DAT_ram_3fcc516c != '\0') && (iVar1 = 0x102, param_1 != 0)) &&
     (iVar1 = FUN_ram_42084bda(1,auStack_c8), iVar1 == 0)) {
    FUN_ram_4039c61e(param_1,auStack_c8,param_2 + -1);
    *(undefined1 *)(param_1 + param_2 + -1) = 0;
  }
  return iVar1;
}

