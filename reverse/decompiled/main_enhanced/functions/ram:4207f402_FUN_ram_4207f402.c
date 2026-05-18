
undefined4 FUN_ram_4207f402(void)

{
  int iVar1;
  undefined1 auStack_18 [6];
  undefined1 uStack_12;
  
  iVar1 = (*(code *)&SUB_ram_40011f9c)();
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe944,&DAT_ram_3c0c46e8,0x18d);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(uint *)(iVar1 + 0xc) = *(uint *)(iVar1 + 0xc) & 0xfdffffff | 1;
  FUN_ram_4039c11e(auStack_18,iVar1 + 4,6);
  uStack_12 = (undefined1)*(undefined2 *)(iVar1 + 0x26);
  FUN_ram_4208344a(0xe,auStack_18,8);
  *(undefined1 *)(iVar1 + 0x24) = 0;
  return 1;
}

