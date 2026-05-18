
undefined4 FUN_ram_42035d6e(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d234,0x3c072718,0xc19);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = *(ushort *)(param_3 + 2);
  bVar2 = *(byte *)(param_3 + 3) >> 4;
  if ((uVar1 & 0x800) == 0) {
    uVar3 = 0x3c072734;
  }
  else {
    uVar3 = 0x3c072728;
  }
  FUN_ram_42033fd8(1,0x400,3,0x3c07e118,*(undefined2 *)(param_3 + 4),bVar2,
                   *(byte *)(param_3 + 3) >> 3 & 1,uVar3);
  if ((uVar1 & 0x800) == 0) {
    FUN_ram_4203541e();
  }
  else {
    FUN_ram_42035c86(param_1,bVar2);
  }
  return 0;
}

