
char FUN_ram_42053ac4(int *param_1)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  byte bVar5;
  
  if (param_1 != (int *)0x0) {
    cVar3 = '\0';
    while( true ) {
      FUN_ram_4205c96c();
      cVar1 = *(char *)((int)param_1 + 0xe);
      if (cVar1 == '\0') break;
      *(char *)((int)param_1 + 0xe) = cVar1 + -1;
      FUN_ram_4205c996();
      if (cVar1 != '\x01') {
        return cVar3;
      }
      piVar2 = (int *)*param_1;
      if ((*(byte *)((int)param_1 + 0xd) & 2) == 0) {
        uVar4 = 0xe;
        bVar5 = *(byte *)(param_1 + 3) & 0xf;
        if (bVar5 != 2) {
          if (bVar5 != 1) {
            if ((*(byte *)(param_1 + 3) & 0xf) == 0) {
              FUN_ram_420530f0(param_1);
              goto LAB_ram_42053b0c;
            }
            break;
          }
          uVar4 = 0xd;
        }
        FUN_ram_420531f8(uVar4);
      }
      else {
        if ((code *)param_1[4] == (code *)0x0) break;
        (*(code *)param_1[4])(param_1);
      }
LAB_ram_42053b0c:
      cVar3 = cVar3 + '\x01';
      param_1 = piVar2;
      if (piVar2 == (int *)0x0) {
        return cVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

