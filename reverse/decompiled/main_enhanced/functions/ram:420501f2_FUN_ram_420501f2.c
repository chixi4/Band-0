
void FUN_ram_420501f2(int *param_1,int param_2)

{
  char cVar1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_ram_4205c96c();
  cVar1 = *(char *)((int)param_1 + 0xf);
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  *(char *)((int)param_1 + 0xf) = cVar1 + -1;
  if (cVar1 == '\x01') {
    unaff_s2 = param_1[1];
    unaff_s3 = *param_1;
    param_1[1] = 0;
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *param_1 = 0;
  }
  else {
    *(char *)(param_1 + 4) = (char)param_2 + '\x02';
  }
  FUN_ram_4205c996();
  if (cVar1 == '\x01') {
    if (unaff_s2 != 0) {
      if (param_2 == 0) {
        FUN_ram_4205e6e8(unaff_s2);
      }
      else {
        FUN_ram_42053ac4();
      }
    }
    if (unaff_s3 != 0) {
      FUN_ram_4205cdfa(unaff_s3);
      return;
    }
  }
  return;
}

