
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4208bcec(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                uint param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0xffffffff;
  if ((param_6 & 1) != 0) {
    if (*(char *)(param_1 + 0x2fa) != '\0') {
      if ((0 < (int)((*(int *)(param_1 + 0x300) + (uint)*(ushort *)(param_3 + 2)) -
                    (uint)*(ushort *)(param_1 + 0x2fc))) &&
         ((uint)*(ushort *)(param_3 + 2) <= (uint)*(ushort *)(param_1 + 0x2fc))) {
        FUN_ram_4207a038(1,0x40,3,&DAT_ram_3c100350);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0x304);
        puVar1 = (undefined1 *)(param_1 + 4);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0x318);
        FUN_ram_4207a038(1,0x40,2,&DAT_ram_3c1020b0,*puVar1,*(undefined1 *)(param_1 + 5),
                         *(undefined1 *)(param_1 + 6),*(undefined1 *)(param_1 + 7));
        *(undefined1 *)(param_1 + 0x2fa) = 0;
        *(undefined4 *)(param_1 + 0x300) = 0;
        iVar3 = FUN_ram_42076bca(puVar1,1);
        if (iVar3 != 0) {
          FUN_ram_42076d64(puVar1,1);
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

