/*
 * STM32- Flash(Flash) emulation.
 *
 * Copyright (c) 2016 Liviu Ionescu.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#include <hw/cortexm/stm32/flash.h>
#include <hw/cortexm/stm32/mcu.h>
#include <hw/cortexm/helper.h>
#include <hw/cortexm/svd.h>

// ----- Generated code -------------------------------------------------------
//
// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// DO NOT EDIT! Automatically generated!
static void stm32f0x2_flash_create_objects(Object *obj, JSON_Object *svd, const char *name)
{
    STM32FlashState *state = STM32_Flash_STATE(obj);

    JSON_Object *periph = svd_get_peripheral_by_name(svd, name);
    svd_add_peripheral_properties_and_children(obj, periph, svd);

    // Registers. 
state->u.f0.reg.acr= cm_object_get_child_by_name(obj, "ACR");
state->u.f0.reg.keyr= cm_object_get_child_by_name(obj, "KEYR");
state->u.f0.reg.optkeyr= cm_object_get_child_by_name(obj, "OPTKEYR");
state->u.f0.reg.sr= cm_object_get_child_by_name(obj, "SR");
state->u.f0.reg.cr= cm_object_get_child_by_name(obj, "CR");
state->u.f0.reg.ar= cm_object_get_child_by_name(obj, "AR");
state->u.f0.reg.obr= cm_object_get_child_by_name(obj, "OBR");
state->u.f0.reg.wrpr= cm_object_get_child_by_name(obj, "WRPR");
// ACRbitfields.
state->u.f0.fld.acr.latency= cm_object_get_child_by_name(state->u.f0.reg.acr, "LATENCY"); 
state->u.f0.fld.acr.prftbe= cm_object_get_child_by_name(state->u.f0.reg.acr, "PRFTBE"); 
state->u.f0.fld.acr.prftbs= cm_object_get_child_by_name(state->u.f0.reg.acr, "PRFTBS"); 
// KEYRbitfields.
state->u.f0.fld.keyr.fkeyr= cm_object_get_child_by_name(state->u.f0.reg.keyr, "FKEYR"); 
// OPTKEYRbitfields.
state->u.f0.fld.optkeyr.optkeyr= cm_object_get_child_by_name(state->u.f0.reg.optkeyr, "OPTKEYR"); 
// SRbitfields.
state->u.f0.fld.sr.bsy= cm_object_get_child_by_name(state->u.f0.reg.sr, "BSY"); 
state->u.f0.fld.sr.pgerr= cm_object_get_child_by_name(state->u.f0.reg.sr, "PGERR"); 
state->u.f0.fld.sr.wrprt= cm_object_get_child_by_name(state->u.f0.reg.sr, "WRPRT"); 
state->u.f0.fld.sr.eop= cm_object_get_child_by_name(state->u.f0.reg.sr, "EOP"); 
// CRbitfields.
state->u.f0.fld.cr.pg= cm_object_get_child_by_name(state->u.f0.reg.cr, "PG"); 
state->u.f0.fld.cr.per= cm_object_get_child_by_name(state->u.f0.reg.cr, "PER"); 
state->u.f0.fld.cr.mer= cm_object_get_child_by_name(state->u.f0.reg.cr, "MER"); 
state->u.f0.fld.cr.optpg= cm_object_get_child_by_name(state->u.f0.reg.cr, "OPTPG"); 
state->u.f0.fld.cr.opter= cm_object_get_child_by_name(state->u.f0.reg.cr, "OPTER"); 
state->u.f0.fld.cr.strt= cm_object_get_child_by_name(state->u.f0.reg.cr, "STRT"); 
state->u.f0.fld.cr.lock= cm_object_get_child_by_name(state->u.f0.reg.cr, "LOCK"); 
state->u.f0.fld.cr.optwre= cm_object_get_child_by_name(state->u.f0.reg.cr, "OPTWRE"); 
state->u.f0.fld.cr.errie= cm_object_get_child_by_name(state->u.f0.reg.cr, "ERRIE"); 
state->u.f0.fld.cr.eopie= cm_object_get_child_by_name(state->u.f0.reg.cr, "EOPIE"); 
state->u.f0.fld.cr.force_optload= cm_object_get_child_by_name(state->u.f0.reg.cr, "FORCE_OPTLOAD"); 
// ARbitfields.
state->u.f0.fld.ar.far_= cm_object_get_child_by_name(state->u.f0.reg.ar, "FAR"); 
// OBRbitfields.
state->u.f0.fld.obr.opterr= cm_object_get_child_by_name(state->u.f0.reg.obr, "OPTERR"); 
state->u.f0.fld.obr.level1_prot= cm_object_get_child_by_name(state->u.f0.reg.obr, "LEVEL1_PROT"); 
state->u.f0.fld.obr.level2_prot= cm_object_get_child_by_name(state->u.f0.reg.obr, "LEVEL2_PROT"); 
state->u.f0.fld.obr.wdg_sw= cm_object_get_child_by_name(state->u.f0.reg.obr, "WDG_SW"); 
state->u.f0.fld.obr.nrst_stop= cm_object_get_child_by_name(state->u.f0.reg.obr, "nRST_STOP"); 
state->u.f0.fld.obr.nrst_stdby= cm_object_get_child_by_name(state->u.f0.reg.obr, "nRST_STDBY"); 
state->u.f0.fld.obr.boot1= cm_object_get_child_by_name(state->u.f0.reg.obr, "BOOT1"); 
state->u.f0.fld.obr.vdda_monitor= cm_object_get_child_by_name(state->u.f0.reg.obr, "VDDA_MONITOR"); 
state->u.f0.fld.obr.data0= cm_object_get_child_by_name(state->u.f0.reg.obr, "Data0"); 
state->u.f0.fld.obr.data1= cm_object_get_child_by_name(state->u.f0.reg.obr, "Data1"); 
// WRPRbitfields.
state->u.f0.fld.wrpr.wrp= cm_object_get_child_by_name(state->u.f0.reg.wrpr, "WRP"); 
}

// ----- 8< ----- 8< -----  8< ----- 8< ----- 8< ----- 8< ----- 8< -----

// ----- Private --------------------------------------------------------------

#if 0
static peripheral_register_t stm32_flash_xxx_pre_write_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    STM32FlashState *state = STM32_Flash_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);

    // TODO: Add code to adjust the value (like applying some masks,
    // for example prevent setting interrupts not enabled).
    // Also process cleared/set by write 1/0 bits.
    // The returned value will be stored in the register value.

    return full_value;
}

static void stm32_flash_xxx_post_write_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size,
        peripheral_register_t value, peripheral_register_t full_value)
{
    STM32FlashState *state = STM32_Flash_STATE(periph);

    peripheral_register_t prev_value = peripheral_register_get_raw_prev_value(reg);
    // The new register value is full_value, the old one is prev_value.

    // TODO: Add code to send the value to the consumer.
}

static peripheral_register_t stm32_flash_xxx_pre_read_callback(Object *reg,
        Object *periph, uint32_t addr, uint32_t offset, unsigned size)
{
    STM32FlashState *state = STM32_Flash_STATE(periph);

    peripheral_register_t value = 0;

    // Add code to get the value from the producer, and return it.

    // This value, possibly masked, will be stored in the register
    // and returned when the register is read.
    return value;
}

static void stm32_flash_xxx_post_read_callback(Object *reg, Object *periph,
        uint32_t addr, uint32_t offset, unsigned size)
{
    STM32FlashState *state = STM32_Flash_STATE(periph);

    peripheral_register_t value = peripheral_register_get_raw_value(reg);

    // TODO: add code to perform the post read actions, like clearing some bits.
}
#endif

// ----------------------------------------------------------------------------

// TODO: remove this if the peripheral is always enabled.
static bool stm32_flash_is_enabled(Object *obj)
{
    STM32FlashState *state = STM32_Flash_STATE(obj);

    if (register_bitfield_is_non_zero(state->enabling_bit)) {
        return true; // Positive logic, bit == 1 means enabled.
    }

    // Not enabled
    return false;
}

static void stm32_flash_instance_init_callback(Object *obj)
{
    qemu_log_function_name();

    STM32FlashState *state = STM32_Flash_STATE(obj);

    // Capabilities are not yet available.

// TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = NULL;
    
    // TODO: Add code to initialise all members.
}

static void stm32_flash_realize_callback(DeviceState *dev, Error **errp)
{
    qemu_log_function_name();

    // Call parent realize().
    if (!cm_device_parent_realize(dev, errp, TYPE_STM32_Flash)) {
        return;
    }

    STM32MCUState *mcu = stm32_mcu_get();
    CortexMState *cm_state = CORTEXM_MCU_STATE(mcu);

    STM32FlashState *state = STM32_Flash_STATE(dev);
    // First thing first: get capabilities from MCU, needed everywhere.
    state->capabilities = mcu->capabilities;

    // Also keep a local pointer, to access them easier.
    const STM32Capabilities *capabilities = state->capabilities;
    assert(capabilities != NULL);

    Object *obj = OBJECT(dev);

    const char *periph_name = "Flash";

    svd_set_peripheral_address_block(cm_state->svd_json, periph_name, obj);
    peripheral_create_memory_region(obj);

    // TODO: remove this if the peripheral is always enabled.
    char enabling_bit_name[STM32_RCC_SIZEOF_ENABLING_BITFIELD];

    switch (capabilities->family) {
    case STM32_FAMILY_F0:

        if (capabilities->f0.is_0x2) {

            stm32f0x2_flash_create_objects(obj, cm_state->svd_json, periph_name);

            // TODO: add actions.
            // cm_object_property_set_str(state->u.f0.fld.xxx.fff, "GGG", "follows");
            // cm_object_property_set_str(state->u.f0.fld.xxx.fff, "GGG", "cleared-by");

            // TODO: add callbacks.
            // peripheral_register_set_pre_read(state->f0.reg.xxx, &stm32_flash_xxx_pre_read_callback);
            // peripheral_register_set_post_read(state->f0.reg.xxx, &stm32_flash_xxx_post_read_callback);
            // peripheral_register_set_pre_read(state->f0.reg.xxx, &stm32_flash_xxx_pret_read_callback);
            // peripheral_register_set_post_write(state->f0.reg.xxx, &stm32_flash_xxx_post_write_callback);

            // TODO: add interrupts.

// TODO: remove this if the peripheral is always enabled.
            snprintf(enabling_bit_name, sizeof(enabling_bit_name) - 1,
                DEVICE_PATH_STM32_RCC "/AHB1ENR/FlashEN");
} else {
            assert(false);
        }

        break;

    default:
        assert(false);
        break;
    }

    // TODO: remove this if the peripheral is always enabled.
    state->enabling_bit = OBJECT(cm_device_by_name(enabling_bit_name));

    peripheral_prepare_registers(obj);
}

static void stm32_flash_reset_callback(DeviceState *dev)
{
    qemu_log_function_name();

    // Call parent reset(); this will reset all children registers.
    cm_device_parent_reset(dev, TYPE_STM32_Flash);
}

static void stm32_flash_class_init_callback(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = stm32_flash_reset_callback;
    dc->realize = stm32_flash_realize_callback;

    // TODO: remove this if the peripheral is always enabled.
    PeripheralClass *per_class = PERIPHERAL_CLASS(klass);
    per_class->is_enabled = stm32_flash_is_enabled;
}

static const TypeInfo stm32_flash_type_info = {
    .name = TYPE_STM32_Flash,
    .parent = TYPE_STM32_Flash_PARENT,
    .instance_init = stm32_flash_instance_init_callback,
    .instance_size = sizeof(STM32FlashState),
    .class_init = stm32_flash_class_init_callback,
    .class_size = sizeof(STM32FlashClass) };

static void stm32_flash_register_types(void)
{
    type_register_static(&stm32_flash_type_info);
}

type_init(stm32_flash_register_types);

// ----------------------------------------------------------------------------
