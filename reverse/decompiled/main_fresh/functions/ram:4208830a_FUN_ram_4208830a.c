
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208830a(void)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_ram_42085a58();
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fc848);
  }
  else {
    iVar1 = *(int *)(_DAT_ram_3fcc4014 + 0xe4);
    pcVar2 = *(code **)(_DAT_ram_3fcdfdd8 + 0xec);
    *(undefined4 *)(iVar1 + 0x2e0) = 0;
    *(undefined4 *)(iVar1 + 0x2e4) = 0;
    (*pcVar2)(iVar1 + 0x2cc,0x42075b64,0);
    if (*(short *)(iVar1 + 0x2bf) == 0) {
      *(undefined1 *)(iVar1 + 0x2bf) = 0x78;
      *(undefined1 *)(iVar1 + 0x2c0) = 0;
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fd184);
    }
    FUN_ram_4207a038(1,1,3,&DAT_ram_3c0ffe58,*(undefined2 *)(iVar1 + 0x2bf));
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar1 + 0x2cc,(uint)*(ushort *)(iVar1 + 0x2bf) * 1000,0)
    ;
  }
  return 0;
}

