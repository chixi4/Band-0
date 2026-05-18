
int FUN_ram_420313cc(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  byte abStack_74 [4];
  undefined1 auStack_70 [76];
  
  uVar2 = FUN_ram_42029140(*param_1);
  bVar3 = 1;
  if (param_2 != 0) {
    bVar3 = (param_3 != 0) + 1;
  }
  abStack_74[0] = 0;
  iVar1 = -0x5100;
  puVar4 = param_1 + 3;
  while (((((abStack_74[0] < bVar3 && (iVar1 = FUN_ram_42029306(param_1), iVar1 == 0)) &&
           (iVar1 = FUN_ram_42029264(param_1,puVar4,uVar2), iVar1 == 0)) &&
          (iVar1 = FUN_ram_42029264(param_1,abStack_74,1), iVar1 == 0)) &&
         ((((bVar3 != 2 || (iVar1 = FUN_ram_42029264(param_1,param_2,param_3), iVar1 == 0)) &&
           ((iVar1 = FUN_ram_4202927a(param_1,auStack_70), iVar1 == 0 &&
            ((iVar1 = FUN_ram_4202915c(param_1,auStack_70,uVar2), iVar1 == 0 &&
             (iVar1 = FUN_ram_42029264(param_1,puVar4,uVar2), iVar1 == 0)))))) &&
          (iVar1 = FUN_ram_4202927a(param_1,puVar4), iVar1 == 0))))) {
    abStack_74[0] = abStack_74[0] + 1;
  }
  FUN_ram_420293a6(auStack_70,0x40);
  return iVar1;
}

