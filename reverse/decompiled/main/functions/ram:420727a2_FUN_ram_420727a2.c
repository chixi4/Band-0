
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420727a2(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  iVar2 = FUN_ram_4207212e();
  if (iVar2 != 1) {
    return -0x4e80;
  }
  FUN_ram_42072140(auStack_68);
  puVar1 = auStack_50;
  do {
    FUN_ram_4206806e(puVar1);
    puVar1 = puVar1 + 8;
  } while (puVar1 != auStack_30);
  iVar2 = FUN_ram_420722fc(param_1,auStack_68,param_3,param_4,param_7);
  if ((iVar2 != 0) ||
     (iVar2 = FUN_ram_420722fc(param_1,param_2,param_5,param_6,param_7), iVar2 != 0))
  goto LAB_ram_4207282a;
  puVar5 = param_2 + 8;
  puVar1 = param_2 + 0x10;
  _DAT_ram_3fcc53b8 = _DAT_ram_3fcc53b8 + 1;
  if (*(int *)(param_2 + 0x10) == 0) {
LAB_ram_42072824:
    iVar2 = -0x4f80;
    goto LAB_ram_4207282a;
  }
  iVar2 = FUN_ram_420685b4(auStack_58,0);
  puVar4 = param_2;
  if (iVar2 == 0) {
LAB_ram_42072870:
    iVar2 = FUN_ram_42072284(param_2,puVar4);
  }
  else {
    iVar2 = FUN_ram_420685b4(puVar1,0);
    if (iVar2 == 0) {
      puVar4 = auStack_68;
      goto LAB_ram_42072870;
    }
    iVar2 = FUN_ram_420685b4(puVar1,1);
    if (iVar2 != 0) goto LAB_ram_42072824;
    iVar2 = FUN_ram_42071f8c(param_1,auStack_50,auStack_58);
    if (((((iVar2 != 0) ||
          (iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_50,auStack_58), iVar2 != 0)) ||
         (iVar2 = FUN_ram_42071f8c(param_1,auStack_50,auStack_50,param_2), iVar2 != 0)) ||
        ((iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_48,puVar5), iVar2 != 0 ||
         (iVar2 = FUN_ram_42071f3c(param_1,auStack_50,auStack_50,auStack_68), iVar2 != 0)))) ||
       (iVar2 = FUN_ram_42071f3c(param_1,auStack_48,auStack_48,auStack_60), iVar2 != 0))
    goto LAB_ram_4207282a;
    iVar2 = FUN_ram_420685b4(auStack_50,0);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_420685b4(auStack_48,0);
      if (iVar2 == 0) {
        _DAT_ram_3fcc53b4 = _DAT_ram_3fcc53b4 + 1;
        if (*(int *)(param_1 + 0xc) == 0) {
          iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_58);
          if (((iVar2 != 0) ||
              (iVar2 = FUN_ram_42072040(param_1,auStack_40,auStack_68,auStack_48), iVar2 != 0)) ||
             ((iVar2 = FUN_ram_42071f3c(param_1,auStack_38,auStack_68,auStack_48), iVar2 != 0 ||
              ((iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_40,auStack_38), iVar2 != 0 ||
               (iVar2 = FUN_ram_4206893c(auStack_50,auStack_48,3), iVar2 != 0))))))
          goto LAB_ram_4207282a;
          iVar2 = FUN_ram_4207208a(param_1,auStack_50);
LAB_ram_420729f4:
          if (iVar2 != 0) goto LAB_ram_4207282a;
        }
        else {
          iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_68);
          if (((iVar2 != 0) || (iVar2 = FUN_ram_4206893c(auStack_50,auStack_48,3), iVar2 != 0)) ||
             (iVar2 = FUN_ram_4207208a(param_1,auStack_50), iVar2 != 0)) goto LAB_ram_4207282a;
          iVar2 = FUN_ram_420685b4(param_1 + 0xc,0);
          if (iVar2 != 0) {
            iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_58);
            if (((iVar2 != 0) ||
                (iVar2 = FUN_ram_42071f8c(param_1,auStack_40,auStack_48), iVar2 != 0)) ||
               (iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_40,param_1 + 0xc), iVar2 != 0))
            goto LAB_ram_4207282a;
            iVar2 = FUN_ram_42072040(param_1,auStack_50,auStack_50,auStack_48);
            goto LAB_ram_420729f4;
          }
        }
        iVar2 = FUN_ram_42071f8c(param_1,auStack_40,auStack_60);
        if ((((((((iVar2 != 0) || (iVar2 = FUN_ram_420720e0(param_1,auStack_40), iVar2 != 0)) ||
                (iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_68,auStack_40), iVar2 != 0)) ||
               ((iVar2 = FUN_ram_420720e0(param_1,auStack_48), iVar2 != 0 ||
                (iVar2 = FUN_ram_42071f8c(param_1,auStack_38,auStack_40), iVar2 != 0)))) ||
              (iVar2 = FUN_ram_420720e0(param_1,auStack_38), iVar2 != 0)) ||
             (((iVar2 = FUN_ram_42071f8c(param_1,auStack_40,auStack_50), iVar2 != 0 ||
               (iVar2 = FUN_ram_42071f3c(param_1,auStack_40,auStack_40,auStack_48), iVar2 != 0)) ||
              ((iVar2 = FUN_ram_42071f3c(param_1,auStack_40,auStack_40,auStack_48), iVar2 != 0 ||
               (((iVar2 = FUN_ram_42071f3c(param_1,auStack_48,auStack_48,auStack_40), iVar2 != 0 ||
                 (iVar2 = FUN_ram_42071f8c(param_1,auStack_48,auStack_48,auStack_50), iVar2 != 0))
                || (iVar2 = FUN_ram_42071f3c(param_1,auStack_48,auStack_48,auStack_38), iVar2 != 0))
               )))))) ||
            ((iVar2 = FUN_ram_42071f8c(param_1,auStack_38,auStack_60,auStack_58), iVar2 != 0 ||
             (iVar2 = FUN_ram_420720e0(param_1,auStack_38), iVar2 != 0)))) ||
           ((iVar2 = FUN_ram_4206826c(param_2,auStack_40), iVar2 != 0 ||
            (iVar2 = FUN_ram_4206826c(puVar5,auStack_48), iVar2 != 0)))) goto LAB_ram_4207282a;
        iVar2 = FUN_ram_4206826c(puVar1,auStack_38);
      }
      else {
        iVar2 = FUN_ram_420722c8(param_2);
      }
    }
    else {
      iVar2 = FUN_ram_42071f8c(param_1,puVar1,auStack_58,auStack_50);
      if ((((((iVar2 != 0) || (iVar2 = FUN_ram_42071f8c(param_1,auStack_40,auStack_50), iVar2 != 0))
            || ((iVar2 = FUN_ram_42071f8c(param_1,auStack_38,auStack_40,auStack_50), iVar2 != 0 ||
                (((iVar2 = FUN_ram_42071f8c(param_1,auStack_40,auStack_40,auStack_68), iVar2 != 0 ||
                  (iVar2 = FUN_ram_4206826c(auStack_50,auStack_40), iVar2 != 0)) ||
                 (iVar2 = FUN_ram_420720e0(param_1,auStack_50), iVar2 != 0)))))) ||
           ((iVar2 = FUN_ram_42071f8c(param_1,param_2,auStack_48), iVar2 != 0 ||
            (iVar2 = FUN_ram_42071f3c(param_1,param_2,param_2,auStack_50), iVar2 != 0)))) ||
          (iVar2 = FUN_ram_42071f3c(param_1,param_2,param_2,auStack_38), iVar2 != 0)) ||
         (((iVar2 = FUN_ram_42071f3c(param_1,auStack_40,auStack_40,param_2), iVar2 != 0 ||
           (iVar2 = FUN_ram_42071f8c(param_1,auStack_40,auStack_40,auStack_48), iVar2 != 0)) ||
          (iVar2 = FUN_ram_42071f8c(param_1,auStack_38,auStack_38,auStack_60), iVar2 != 0))))
      goto LAB_ram_4207282a;
      iVar2 = FUN_ram_42071f3c(param_1,puVar5,auStack_40,auStack_38);
    }
  }
  if (iVar2 == 0) {
    iVar3 = FUN_ram_420685b4(puVar1,0);
    iVar2 = 0;
    if (iVar3 != 0) {
      FUN_ram_4206806e(auStack_70);
      iVar2 = FUN_ram_420690fa(0,auStack_70,puVar1,param_1 + 4);
      if (((iVar2 == 0) && (iVar2 = FUN_ram_42071f8c(param_1,puVar5,puVar5,auStack_70), iVar2 == 0))
         && ((iVar2 = FUN_ram_42071f8c(param_1,auStack_70,auStack_70,auStack_70), iVar2 == 0 &&
             ((iVar2 = FUN_ram_42071f8c(param_1,param_2,param_2,auStack_70), iVar2 == 0 &&
              (iVar2 = FUN_ram_42071f8c(param_1,puVar5,puVar5,auStack_70), iVar2 == 0)))))) {
        iVar2 = FUN_ram_42068310(puVar1,1);
      }
      FUN_ram_42068078(auStack_70);
    }
  }
LAB_ram_4207282a:
  puVar1 = auStack_50;
  do {
    FUN_ram_42068078(puVar1);
    puVar1 = puVar1 + 8;
  } while (puVar1 != auStack_30);
  FUN_ram_420720be(auStack_68);
  return iVar2;
}

