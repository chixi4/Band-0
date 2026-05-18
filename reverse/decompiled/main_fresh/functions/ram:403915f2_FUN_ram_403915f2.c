
void FUN_ram_403915f2(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_ram_420b61ae();
  FUN_ram_40396966();
  uVar3 = FUN_ram_40395a66();
  *(undefined8 *)(gp + -0x6b0) = uVar3;
  FUN_ram_4039139c();
  *(undefined4 *)(gp + -0x6c4) = 0x1c2;
  uVar1 = FUN_ram_403911f2(0xc21,1);
  iVar2 = FUN_ram_40391418(uVar1,1,param_1);
  if (iVar2 == 0x103) {
    FUN_ram_40396994();
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

