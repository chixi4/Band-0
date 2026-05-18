
void FUN_ram_420501f2(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint extraout_a5;
  int unaff_s2;
  int unaff_s3;
  
  FUN_ram_4205c96c();
  uVar2 = (uint)*(byte *)((int)param_1 + 0xf);
  if (uVar2 == 0) {
    FUN_ram_4039bf1e();
    uVar2 = extraout_a5;
  }
  *(char *)((int)param_1 + 0xf) = (char)(uVar2 - 1);
  bVar1 = (uVar2 - 1 & 0xff) == 0;
  if (bVar1) {
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
  if (bVar1) {
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

