
void FUN_ram_4207d43a(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe820,&DAT_ram_3c0c426c,0xb07);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = 0xdd;
  param_1[1] = 0x1a;
  param_1[3] = 0x90;
  param_1[4] = 0x4c;
  param_1[2] = 0;
  param_1[5] = 0x34;
  FUN_ram_4207d2c4(param_1 + 6);
  return;
}

