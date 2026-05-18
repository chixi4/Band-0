
void FUN_ram_4207d256(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7e8,&DAT_ram_3c0c426c,0xa9b);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = 0x2d;
  param_1[1] = 0x1a;
  FUN_ram_4207b8c4(param_1 + 2);
  return;
}

