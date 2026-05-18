
int * FUN_ram_42099f60(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_ram_4039c08e(1,0x80);
  if (piVar1 != (int *)0x0) {
    FUN_ram_4039c11e(piVar1 + 0x1e,param_1,6);
    FUN_ram_4039c11e(piVar1 + 5,param_2,0x58);
    iVar2 = FUN_ram_4209b66e(piVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4039c08e(1,0xfc);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x20) = 1;
        uVar3 = FUN_ram_4209c726(piVar1[8]);
        *(undefined4 *)(iVar2 + 0x14) = uVar3;
        iVar4 = FUN_ram_42099782(piVar1,iVar2);
        if (iVar4 != -1) {
          *(undefined4 *)(iVar2 + 8) = 1;
          FUN_ram_42099e5e(piVar1,iVar2);
          *(undefined4 *)(iVar2 + 8) = 0;
          FUN_ram_42099e5e(piVar1,iVar2);
          *piVar1 = iVar2;
          iVar2 = FUN_ram_4209be4c(0x42089f50,piVar1);
          piVar1[0x1d] = iVar2;
          if (iVar2 != 0) {
            if (piVar1[9] == 0) {
              return piVar1;
            }
            FUN_ram_4209915a(piVar1[9],0,0x42089efe,piVar1,0);
            return piVar1;
          }
          iVar2 = *piVar1;
        }
        thunk_FUN_ram_40390634(iVar2);
      }
      thunk_FUN_ram_40390634(piVar1[0x1b]);
    }
    thunk_FUN_ram_40390634(piVar1);
  }
  return (int *)0x0;
}

