
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420325d4(void)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  while( true ) {
    if (*(int *)(_DAT_ram_3fcb6bb8 + 0x30) <= iVar6) break;
    uVar1 = *(undefined2 *)(iVar6 * 4 + *(int *)(_DAT_ram_3fcb6bb8 + 0x2c));
    uVar2 = FUN_ram_42031600(*(int *)(_DAT_ram_3fcb6bb8 + 0x2c),uVar1);
    if (uVar2 != 0xffffffff) {
      iVar5 = uVar2 * 4;
      iVar7 = 0;
      while( true ) {
        thunk_FUN_ram_4202b7dc(uVar2);
        iVar3 = FUN_ram_42036622(iVar7);
        if (iVar3 == 0) break;
        iVar4 = FUN_ram_42031628(iVar3,*(int *)(iVar3 + 0x5c) + iVar5);
        uVar2 = (uint)*(ushort *)(iVar3 + 6);
        thunk_FUN_ram_4202b7f6();
        if (iVar4 == 0x1b) {
          uVar2 = FUN_ram_4202ca12(uVar2,uVar1);
        }
        else if (iVar4 == 0x1d) {
          uVar2 = FUN_ram_4202cb96(uVar2,uVar1);
        }
        iVar7 = iVar7 + 1;
      }
      thunk_FUN_ram_4202b7f6();
    }
    iVar6 = iVar6 + 1;
  }
  return;
}

