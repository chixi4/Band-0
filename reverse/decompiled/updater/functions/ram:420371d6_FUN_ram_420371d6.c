
void FUN_ram_420371d6(undefined1 *param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d1dc,0x3c072718,0xa9b);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *param_1 = 0x2d;
  param_1[1] = 0x1a;
  FUN_ram_42035844(param_1 + 2);
  return;
}

