
void FUN_ram_420177fa(int param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_50 [68];
  
  FUN_ram_42017410(1);
  FUN_ram_42017672(8,0x3c070928,0);
  FUN_ram_42017480(0x14,0x22,0xa0,2,0);
  if (param_1 == 0) {
    uVar1 = 0x3c0711f0;
  }
  else {
    uVar1 = 0x3c0711e0;
  }
  FUN_ram_42017672(0x48,uVar1,0);
  if (param_1 == 0) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      param_2 = (char *)0x3c071200;
    }
    (*(code *)&SUB_ram_400106ac)(auStack_50,0x40,0x3c071218,param_2);
    FUN_ram_42017672(0x70,auStack_50,0);
    uVar2 = 0x3c071224;
    uVar1 = 0x88;
  }
  else {
    uVar2 = 0x3c071208;
    uVar1 = 0x70;
  }
  FUN_ram_42017672(uVar1,uVar2,0);
  FUN_ram_4201774e();
  return;
}

