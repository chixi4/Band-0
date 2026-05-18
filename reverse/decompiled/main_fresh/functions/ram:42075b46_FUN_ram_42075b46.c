
undefined4 FUN_ram_42075b46(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe4a8,&DAT_ram_3c0c4114,0x10f7);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (param_2 == 0xa0) {
    iVar2 = FUN_ram_420750ee();
LAB_ram_42075bf4:
    uVar1 = 7;
  }
  else {
    if (param_2 < 0xa1) {
      if (param_2 != 0x20) {
        if (param_2 < 0x21) {
          iVar2 = 0x10;
          if (param_2 == 0) goto LAB_ram_42075b9e;
        }
        else {
          iVar2 = 0x30;
        }
        if (param_2 != iVar2) goto LAB_ram_42075bc6;
        iVar2 = FUN_ram_42074aa6(param_1);
        uVar1 = 6;
        if (param_3 != 0) {
          param_1[3] = param_1[3] & 0xfdffffff;
          uVar1 = 6;
        }
        goto LAB_ram_42075c02;
      }
LAB_ram_42075b9e:
      if (DAT_ram_3fcc4238 != '\0') {
        DAT_ram_3fcc4238 = '\0';
        param_2 = 0x20;
      }
      iVar2 = FUN_ram_42074648(param_1,param_2);
    }
    else {
      if (param_2 != 0xb0) {
        if (param_2 != 0xc0) goto LAB_ram_42075bc6;
        iVar2 = FUN_ram_4207508c();
        goto LAB_ram_42075bf4;
      }
      iVar2 = FUN_ram_42074d72();
    }
    uVar1 = 6;
  }
LAB_ram_42075c02:
  if (iVar2 != 0) {
    (*(code *)&SUB_ram_40011fc8)(param_1,iVar2,7,0,0);
    (*(code *)&SUB_ram_40012000)(iVar2,uVar1);
    uVar1 = FUN_ram_420743c0(param_1,iVar2,param_2);
    return uVar1;
  }
LAB_ram_42075bc6:
  (*(code *)&SUB_ram_40011fa4)(0);
  return 1;
}

