
uint FUN_ram_42053ac4(int *param_1)

{
  char cVar1;
  int *unaff_s0;
  uint unaff_s1;
  undefined4 uVar2;
  uint uVar3;
  uint unaff_s2;
  uint unaff_s3;
  
  if (param_1 == (int *)0x0) goto LAB_ram_42053b24;
  unaff_s1 = 0;
  unaff_s2 = 2;
  unaff_s3 = 1;
  do {
    while( true ) {
      FUN_ram_4205c96c();
      cVar1 = *(char *)((int)param_1 + 0xe);
      unaff_s0 = (int *)0x0;
      if (cVar1 != '\0') break;
LAB_ram_42053b24:
      FUN_ram_4039bf1e();
      param_1 = unaff_s0;
    }
    *(char *)((int)param_1 + 0xe) = cVar1 + -1;
    FUN_ram_4205c996();
    if (cVar1 != '\x01') {
      return unaff_s1;
    }
    unaff_s0 = (int *)*param_1;
    if ((*(byte *)((int)param_1 + 0xd) & 2) == 0) {
      uVar2 = 0xe;
      uVar3 = *(byte *)(param_1 + 3) & 0xf;
      if (uVar3 != unaff_s2) {
        if (uVar3 != unaff_s3) {
          if ((*(byte *)(param_1 + 3) & 0xf) == 0) {
            FUN_ram_420530f0(param_1);
            goto LAB_ram_42053b0c;
          }
          goto LAB_ram_42053b24;
        }
        uVar2 = 0xd;
      }
      FUN_ram_420531f8(uVar2);
    }
    else {
      if ((code *)param_1[4] == (code *)0x0) goto LAB_ram_42053b24;
      (*(code *)param_1[4])(param_1);
    }
LAB_ram_42053b0c:
    unaff_s1 = unaff_s1 + 1 & 0xff;
    param_1 = unaff_s0;
    if (unaff_s0 == (int *)0x0) {
      return unaff_s1;
    }
  } while( true );
}

