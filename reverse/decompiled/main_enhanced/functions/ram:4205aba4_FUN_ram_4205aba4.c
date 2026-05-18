
void FUN_ram_4205aba4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  param_3 = param_3 * 0x18;
  if ((byte)(&DAT_ram_3fcc258c)[param_3] < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar2 = param_1 + 0x32;
  if ((&DAT_ram_3fcc258c)[param_3] == 2) {
    if (*(ushort *)(&DAT_ram_3fcc258a + param_3) < 0x11d) {
      if (*(ushort *)(&DAT_ram_3fcc258a + param_3) < 0x10e) goto LAB_ram_4205ac08;
      iVar1 = FUN_ram_4205a5a6(param_1,iVar2,param_3 + 0x3fcc2584,iVar2,param_1 + 4,
                               &DAT_ram_3c0f7594,&DAT_ram_3fcc257c + param_3);
    }
    else {
      iVar1 = FUN_ram_4205aaec(param_1,&DAT_ram_3fcc257c + param_3);
    }
    if (iVar1 == 0) {
      (&DAT_ram_3fcc258c)[param_3] = 3;
    }
  }
LAB_ram_4205ac08:
  FUN_ram_4205c318(param_1,param_2,iVar2,param_3 + 0x3fcc2584,0x800);
  return;
}

