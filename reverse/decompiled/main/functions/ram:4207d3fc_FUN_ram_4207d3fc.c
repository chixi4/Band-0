
void FUN_ram_4207d3fc(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7f8,&DAT_ram_3c0c426c,0xafa);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = 0x3d;
  param_1[1] = 0x16;
  FUN_ram_4207d2c4(param_1 + 2);
  return;
}

