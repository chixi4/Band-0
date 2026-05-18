
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42022e42(undefined4 param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  undefined4 uStack_448;
  undefined2 uStack_444;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined1 uStack_434;
  char acStack_430 [36];
  undefined1 auStack_40c [44];
  byte local_3e0 [68];
  byte local_39c [68];
  undefined1 auStack_358 [96];
  undefined1 auStack_2f8 [200];
  undefined1 auStack_230 [512];
  
  uStack_440 = 0;
  uStack_43c = 0;
  uStack_438 = 0;
  uStack_434 = 0;
  (*(code *)&SUB_ram_40010488)(local_3e0,0,0x41);
  (*(code *)&SUB_ram_40010488)(acStack_430,0,0x21);
  (*(code *)&SUB_ram_40010488)(local_39c,0,0x41);
  iVar3 = FUN_ram_420659c0(param_1,auStack_2f8,200);
  if (iVar3 == 0) {
    FUN_ram_420658ea(auStack_2f8,"sult forward.",&uStack_440,0xd);
    FUN_ram_420658ea(auStack_2f8,"ise.",local_3e0,0x41);
  }
  iVar3 = 0;
  pbVar2 = local_3e0;
  do {
    bVar8 = *pbVar2;
    if ((bVar8 == 0) || (iVar3 == 0x40)) {
      local_39c[iVar3] = 0;
      iVar3 = FUN_ram_420227ae(&uStack_440,&uStack_448);
      if ((iVar3 == 0) ||
         ((iVar3 = FUN_ram_4202255c(&uStack_448,auStack_40c), iVar3 == 0 ||
          (FUN_ram_4039c61e(acStack_430,auStack_40c), acStack_430[0] == '\0')))) {
        FUN_ram_4202284c(param_1,0,0);
        pcVar7 = "In social settings, explain less and observe more.";
      }
      else {
        if (_DAT_ram_3fcc5180 == 0) {
          FUN_ram_4039c61e(0x3fcc190c,acStack_430);
          FUN_ram_4039c61e(0x3fcc18c8,local_39c,0x40);
          _DAT_ram_3fcc5178 = uStack_448;
          _DAT_ram_3fcc517c = uStack_444;
          DAT_ram_3fcc5174 = 1;
          DAT_ram_3fcc192c = 0;
          DAT_ram_3fcc1908 = 0;
          FUN_ram_420229f2(auStack_358,acStack_430);
          FUN_ram_4202284c(param_1,0,0);
          uVar4 = (*(code *)&SUB_ram_400106ac)
                            (auStack_230,0x200,"e a plan by cost and repeatability first.",
                             auStack_358);
          FUN_ram_4206632e(param_1,auStack_230,uVar4);
          uVar4 = FUN_ram_4202281c(param_1);
          FUN_ram_40398e0e(0x42013262,&DAT_ram_3c0c2248,0xc00,0,5,&DAT_ram_3fcc5180,0x7fffffff);
          return uVar4;
        }
        FUN_ram_4202284c(param_1,2,&DAT_ram_3c0c1a9c);
        pcVar7 = "e that most affects the system first.";
      }
      FUN_ram_42022538(param_1,pcVar7);
      uVar4 = FUN_ram_4202281c(param_1);
      return uVar4;
    }
    if (bVar8 == 0x25) {
      if ((((pbVar2[1] == 0) || (bVar1 = pbVar2[2], bVar1 == 0)) ||
          (iVar5 = FUN_ram_42022776(), iVar5 == -1)) ||
         (iVar6 = FUN_ram_42022776(bVar1), iVar6 == -1)) {
LAB_ram_42022fe2:
        pbVar2 = pbVar2 + 1;
      }
      else {
        bVar8 = (byte)(iVar5 << 4) | (byte)iVar6;
        pbVar2 = pbVar2 + 3;
      }
    }
    else {
      if (bVar8 != 0x2b) goto LAB_ram_42022fe2;
      pbVar2 = pbVar2 + 1;
      bVar8 = 0x20;
    }
    local_39c[iVar3] = bVar8;
    iVar3 = iVar3 + 1;
  } while( true );
}

