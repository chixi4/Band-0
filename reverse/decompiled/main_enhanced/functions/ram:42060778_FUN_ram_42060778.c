
void FUN_ram_42060778(int param_1)

{
  undefined4 uStack_34;
  int aiStack_30 [2];
  uint uStack_28;
  
  FUN_ram_4206031c(aiStack_30);
  uStack_34 = (*(code *)&SUB_ram_400108cc)(aiStack_30[0] + -0x7c558180);
  FUN_ram_4039c11e(param_1,&uStack_34,4);
  uStack_34 = (*(code *)&SUB_ram_400108cc)
                        (uStack_28 * 0x10c7 - ((uStack_28 >> 5) + (uStack_28 >> 9)));
  FUN_ram_4039c11e(param_1 + 4,&uStack_34);
  return;
}

