
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42032344(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [8];
  ushort uStack_28;
  ushort uStack_26;
  byte bStack_24;
  
  iVar2 = *(int *)(_DAT_ram_3fcb6bb8 + 0x2c);
  iVar3 = FUN_ram_42031600(iVar2);
  if ((iVar3 != -1) && ((*(byte *)(iVar2 + iVar3 * 4 + 3) & 2) != 0)) {
    thunk_FUN_ram_4202b7dc();
    iVar2 = FUN_ram_420365de(param_1);
    uVar1 = *(ushort *)(iVar2 + 100);
    if (uVar1 == param_2) {
      *(undefined2 *)(iVar2 + 100) = 0;
      if (((*(ushort *)(iVar2 + 0x68) & 4) == 0) ||
         (iVar3 = iVar3 * 4 + *(int *)(iVar2 + 0x5c), *(char *)(iVar3 + 2) < '\0')) {
        thunk_FUN_ram_4202b7f6();
      }
      else {
        FUN_ram_4039c11e(local_30,iVar2 + 8,7);
        local_30[0] = thunk_FUN_ram_420315b6(*(undefined1 *)(iVar2 + 8));
        uStack_26 = (ushort)*(byte *)(iVar3 + 2);
        bStack_24 = bStack_24 & 0xfe;
        uStack_28 = uVar1;
        thunk_FUN_ram_4202b7f6();
        FUN_ram_4202cf0a(local_30);
      }
      return 0;
    }
    thunk_FUN_ram_4202b7f6();
  }
  return 5;
}

