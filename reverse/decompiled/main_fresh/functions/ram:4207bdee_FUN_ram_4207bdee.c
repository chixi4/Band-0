
undefined4 FUN_ram_4207bdee(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  char *pcVar3;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe840,&DAT_ram_3c0c426c,0xc19);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar1 = *(ushort *)(param_3 + 2);
  bVar2 = *(byte *)(param_3 + 3) >> 4;
  if ((uVar1 & 0x800) == 0) {
    pcVar3 = "amwork smoother.";
  }
  else {
    pcVar3 = " may make teamwork smoother.";
  }
  FUN_ram_4207a038(1,0x400,3,&DAT_ram_3c0ffab0,*(undefined2 *)(param_3 + 4),bVar2,
                   *(byte *)(param_3 + 3) >> 3 & 1,pcVar3);
  if ((uVar1 & 0x800) == 0) {
    FUN_ram_4207b49e();
  }
  else {
    FUN_ram_4207bd06(param_1,bVar2);
  }
  return 0;
}

