
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42023db8(int param_1,int param_2,undefined1 param_3,undefined4 param_4,
                    undefined2 param_5)

{
  int iVar1;
  int iVar2;
  int aiStack_24 [3];
  
  iVar2 = _DAT_ram_3fcc518c;
  if (((_DAT_ram_3fcc518c == param_1) && (*(char *)(_DAT_ram_3fcc518c + 0x26) != '\0')) &&
     (iVar1 = FUN_ram_42029a52(*(undefined2 *)
                                (*(int *)(_DAT_ram_3fcc518c + 0x54) + param_2 * 0x18 + 0x14),
                               aiStack_24), iVar1 == 0)) {
    iVar1 = FUN_ram_4202d538(aiStack_24[0],iVar2 + 0x2b,1,0);
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40011a08)(aiStack_24[0]);
      aiStack_24[0] = 0;
      iVar2 = FUN_ram_42023b5a(param_3,1,iVar2 + 0x2b);
      if ((iVar2 != 0) && (aiStack_24[0] = FUN_ram_4202d4f8(param_4,param_5), aiStack_24[0] != 0)) {
        iVar2 = FUN_ram_4202c9ac(*(undefined2 *)(_DAT_ram_3fcc518c + 0x28),
                                 *(undefined2 *)(iVar2 + 0xc),aiStack_24[0]);
        return -(uint)(iVar2 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
  }
  return -1;
}

