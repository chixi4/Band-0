
bool FUN_ram_4207f360(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe93c,&DAT_ram_3c0c46e8,0x159);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  iVar1 = (*(code *)&SUB_ram_40011f9c)();
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x135) = param_2;
  }
  return iVar1 != 0;
}

