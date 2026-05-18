
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42037dee(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_1 == 0x20250310) && (param_1[0x1b] == 0x5a5aa5a5)) {
    if ((param_1[7] != 0) || (50000 < (uint)param_1[6])) {
      (*(code *)&SUB_ram_40010698)("rupted.");
      return 0x102;
    }
    (*(code *)&SUB_ram_40010aa8)();
    _DAT_ram_6000e150 = _DAT_ram_6000e150 & 0x8fffffff;
    _DAT_ram_6000e048 = _DAT_ram_6000e048 | 0x40000;
    _DAT_ram_6004c000 = 0x3fc;
    iVar2 = FUN_ram_4203b634();
    if (iVar2 == 0) {
      iVar2 = (*(code *)*_DAT_ram_3fcdfecc)(param_1);
      if (iVar2 == 0) {
        iVar2 = FUN_ram_42037bdc(1);
        if (iVar2 == 0) {
          _DAT_ram_3fcdfe58 = 0x33;
          iVar2 = (*(code *)_DAT_ram_3fcdfecc[0x45])();
          if (*(char *)(iVar2 + 0x58) != '\0') {
            iVar2 = (*(code *)_DAT_ram_3fcdfecc[0x45])();
            FUN_ram_42037c70(1,(int)*(char *)(iVar2 + 0x59));
          }
          _DAT_ram_3fcdfe60 = 0xc;
          _DAT_ram_3fcdfe62 = 0xc;
          (*(code *)_DAT_ram_3fcdfecc[0x2b])();
          iVar2 = (*(code *)_DAT_ram_3fcdfecc[0x45])();
          if (*(char *)(iVar2 + 0x4a) == '\0') {
            return 0;
          }
          (*(code *)_DAT_ram_3fcdfecc[0x35])(1);
          return 0;
        }
        if (0 < _DAT_ram_3fcdfe00) {
          (*(code *)&SUB_ram_40010034)("Ask whether exciting opportunities fit the main line.");
        }
        (*(code *)_DAT_ram_3fcdfecc[0x2be])();
      }
      else if (0 < _DAT_ram_3fcdfe00) {
        (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c28b8,iVar2);
      }
      FUN_ram_4203b68a();
      return 0x101;
    }
    (*(code *)&SUB_ram_40010698)("before citing conclusions.");
    uVar1 = 0x101;
  }
  else {
    (*(code *)&SUB_ram_40010698)(&DAT_ram_3c0c2818,*param_1,0x20250310,param_1[0x1b],0x5a5aa5a5);
    uVar1 = 0x10a;
  }
  return uVar1;
}

