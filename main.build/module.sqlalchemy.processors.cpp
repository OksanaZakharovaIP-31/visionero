/* Generated code for Python module 'sqlalchemy.processors'
 * created by Nuitka version 1.8.4
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_sqlalchemy$processors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$processors;
PyDictObject *moduledict_sqlalchemy$processors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[99];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[99];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlalchemy.processors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 99; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_sqlalchemy$processors(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 99; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6a0a7ead17131d60b6a18d87a63b802e;
static PyCodeObject *codeobj_c31f7bdee78896e86dcd4a7f0cb1206d;
static PyCodeObject *codeobj_086ef60baa65d4ba5e0b083f678d38bd;
static PyCodeObject *codeobj_78baae7a618ff09c697c17c7cafc5848;
static PyCodeObject *codeobj_06dec2ae7dee56118308a989b56b206d;
static PyCodeObject *codeobj_85fbea188489e0da5be215e53f2c2983;
static PyCodeObject *codeobj_1564f29d64a4b9fc073e51f0fcac9608;
static PyCodeObject *codeobj_a32b31ff0f42174f52e11e31a0275fa8;
static PyCodeObject *codeobj_dc77bd9eea8f413bc03e68952397d102;
static PyCodeObject *codeobj_7243051851fb179ba8d36ceed8bf44a4;
static PyCodeObject *codeobj_1899fdf0132079614fd7bddbb943cea8;
static PyCodeObject *codeobj_8b329c464b75332183e7d4f269784523;
static PyCodeObject *codeobj_4483c2e595d2bde3cdf4729024eaf89b;
static PyCodeObject *codeobj_93b37e2cca73cf8295d24d1961c8367c;
static PyCodeObject *codeobj_05bece075be169b1bb8bca234af79675;
static PyCodeObject *codeobj_35c3c6f92baede0de8e52f6a560e42d9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[84]); CHECK_OBJECT(module_filename_obj);
    codeobj_6a0a7ead17131d60b6a18d87a63b802e = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[85], mod_consts[85], NULL, NULL, 0, 0, 0);
    codeobj_c31f7bdee78896e86dcd4a7f0cb1206d = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[86], NULL, 1, 0, 0);
    codeobj_086ef60baa65d4ba5e0b083f678d38bd = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[87], mod_consts[88], 1, 0, 0);
    codeobj_78baae7a618ff09c697c17c7cafc5848 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[87], mod_consts[88], 1, 0, 0);
    codeobj_06dec2ae7dee56118308a989b56b206d = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[89], mod_consts[90], 1, 0, 0);
    codeobj_85fbea188489e0da5be215e53f2c2983 = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[2], mod_consts[2], mod_consts[91], mod_consts[92], 1, 0, 0);
    codeobj_1564f29d64a4b9fc073e51f0fcac9608 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[93], NULL, 0, 0, 0);
    codeobj_a32b31ff0f42174f52e11e31a0275fa8 = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[94], NULL, 2, 0, 0);
    codeobj_dc77bd9eea8f413bc03e68952397d102 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[95], NULL, 2, 0, 0);
    codeobj_7243051851fb179ba8d36ceed8bf44a4 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[96], NULL, 2, 0, 0);
    codeobj_1899fdf0132079614fd7bddbb943cea8 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[97], NULL, 2, 0, 0);
    codeobj_8b329c464b75332183e7d4f269784523 = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[98], NULL, 2, 0, 0);
    codeobj_4483c2e595d2bde3cdf4729024eaf89b = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[86], NULL, 1, 0, 0);
    codeobj_93b37e2cca73cf8295d24d1961c8367c = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[86], NULL, 1, 0, 0);
    codeobj_05bece075be169b1bb8bca234af79675 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[95], NULL, 2, 0, 0);
    codeobj_35c3c6f92baede0de8e52f6a560e42d9 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[96], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory();


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback();


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory();


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory$$$function__1_process(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__4_to_float();


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__5_to_str();


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__6_int_to_boolean();


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__3_to_unicode_processor_factory(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__4_to_conditional_unicode_processor_factory(PyObject *defaults);


static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__5_to_decimal_processor_factory();


// The module function definitions.
static PyObject *impl_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_regexp = python_pars[0];
    struct Nuitka_CellObject *par_type_ = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_rmatch = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_has_named_groups = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_FrameObject *frame_a32b31ff0f42174f52e11e31a0275fa8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a32b31ff0f42174f52e11e31a0275fa8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a32b31ff0f42174f52e11e31a0275fa8)) {
        Py_XDECREF(cache_frame_a32b31ff0f42174f52e11e31a0275fa8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a32b31ff0f42174f52e11e31a0275fa8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a32b31ff0f42174f52e11e31a0275fa8 = MAKE_FUNCTION_FRAME(tstate, codeobj_a32b31ff0f42174f52e11e31a0275fa8, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a32b31ff0f42174f52e11e31a0275fa8->m_type_description == NULL);
    frame_a32b31ff0f42174f52e11e31a0275fa8 = cache_frame_a32b31ff0f42174f52e11e31a0275fa8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a32b31ff0f42174f52e11e31a0275fa8);
    assert(Py_REFCNT(frame_a32b31ff0f42174f52e11e31a0275fa8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_regexp);
        tmp_expression_value_1 = par_regexp;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_rmatch) == NULL);
        PyCell_SET(var_rmatch, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_regexp);
        tmp_expression_value_2 = par_regexp;
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
        if (tmp_value_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "occco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = (tmp_res != 0) ? Py_True : Py_False;
        assert(Nuitka_Cell_GET(var_has_named_groups) == NULL);
        Py_INCREF(tmp_assign_source_2);
        PyCell_SET(var_has_named_groups, tmp_assign_source_2);

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a32b31ff0f42174f52e11e31a0275fa8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a32b31ff0f42174f52e11e31a0275fa8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a32b31ff0f42174f52e11e31a0275fa8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a32b31ff0f42174f52e11e31a0275fa8,
        type_description_1,
        par_regexp,
        par_type_,
        var_rmatch,
        var_has_named_groups,
        var_process
    );


    // Release cached frame if used for exception.
    if (frame_a32b31ff0f42174f52e11e31a0275fa8 == cache_frame_a32b31ff0f42174f52e11e31a0275fa8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a32b31ff0f42174f52e11e31a0275fa8);
        cache_frame_a32b31ff0f42174f52e11e31a0275fa8 = NULL;
    }

    assertFrameObject(frame_a32b31ff0f42174f52e11e31a0275fa8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = var_has_named_groups;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_rmatch;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_type_;
        Py_INCREF(tmp_closure_1[2]);

        tmp_assign_source_3 = MAKE_FUNCTION_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_3;
    }
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_rmatch);
    Py_DECREF(var_rmatch);
    var_rmatch = NULL;
    CHECK_OBJECT(var_has_named_groups);
    Py_DECREF(var_has_named_groups);
    var_has_named_groups = NULL;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_rmatch);
    Py_DECREF(var_rmatch);
    var_rmatch = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_regexp);
    Py_DECREF(par_regexp);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_regexp);
    Py_DECREF(par_regexp);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory$$$function__1_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *var_m = NULL;
    PyObject *var_err = NULL;
    PyObject *var_groups = NULL;
    struct Nuitka_FrameObject *frame_06dec2ae7dee56118308a989b56b206d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_06dec2ae7dee56118308a989b56b206d = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_06dec2ae7dee56118308a989b56b206d)) {
        Py_XDECREF(cache_frame_06dec2ae7dee56118308a989b56b206d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_06dec2ae7dee56118308a989b56b206d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_06dec2ae7dee56118308a989b56b206d = MAKE_FUNCTION_FRAME(tstate, codeobj_06dec2ae7dee56118308a989b56b206d, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_06dec2ae7dee56118308a989b56b206d->m_type_description == NULL);
    frame_06dec2ae7dee56118308a989b56b206d = cache_frame_06dec2ae7dee56118308a989b56b206d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_06dec2ae7dee56118308a989b56b206d);
    assert(Py_REFCNT(frame_06dec2ae7dee56118308a989b56b206d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[4]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 34;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 34;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_06dec2ae7dee56118308a989b56b206d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_06dec2ae7dee56118308a989b56b206d, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_err = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }
        tmp_mod_expr_left_1 = mod_consts[7];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 39;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 39;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 39;
            type_description_1 = "ooooccc";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = par_value;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 39;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 37;
        tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_kw_call_arg_value_0_1 == NULL));
        CHECK_OBJECT(var_err);
        tmp_kw_call_dict_value_0_1 = var_err;
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 36;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooccc";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(var_err);
    var_err = NULL;

    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 33;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_06dec2ae7dee56118308a989b56b206d->m_frame) frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooccc";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 43;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = var_m;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_3;
        tmp_mod_expr_left_2 = mod_consts[13];
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[9]);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[10]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooccc";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = par_value;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 44;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 44;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooccc";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 48;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[0]));
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = var_m;
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 49;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[15],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_groups == NULL);
        var_groups = tmp_assign_source_3;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 50;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_3 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(var_groups);
        tmp_expression_value_4 = var_groups;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 54;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_4 = (PyObject *)&PyLong_Type;
        CHECK_OBJECT(var_groups);
        tmp_expression_value_5 = var_groups;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[18]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 55;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 55;
        tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 55;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 55;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_list_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_list_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 55;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = MAKE_LIST(tstate, tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 55;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_seq_1 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_dict_seq_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = TO_DICT(tstate, tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__10_complex_call_helper_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_list_arg_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_instance_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 61;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = Nuitka_Cell_GET(self->m_closure[2]);
        tmp_called_value_7 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_6 = (PyObject *)&PyLong_Type;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 61;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_m;
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 61;
        tmp_args_element_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[16], 0)
        );

        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        frame_06dec2ae7dee56118308a989b56b206d->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_list_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_list_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_2 = MAKE_LIST(tstate, tmp_list_arg_3);
        Py_DECREF(tmp_list_arg_3);
        if (tmp_dircall_arg2_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_star_list(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_4:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_06dec2ae7dee56118308a989b56b206d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_06dec2ae7dee56118308a989b56b206d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_06dec2ae7dee56118308a989b56b206d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_06dec2ae7dee56118308a989b56b206d,
        type_description_1,
        par_value,
        var_m,
        var_err,
        var_groups,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_06dec2ae7dee56118308a989b56b206d == cache_frame_06dec2ae7dee56118308a989b56b206d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_06dec2ae7dee56118308a989b56b206d);
        cache_frame_06dec2ae7dee56118308a989b56b206d = NULL;
    }

    assertFrameObject(frame_06dec2ae7dee56118308a989b56b206d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_groups);
    var_groups = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_groups);
    var_groups = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_to_unicode_processor_factory = NULL;
    PyObject *var_to_conditional_unicode_processor_factory = NULL;
    PyObject *var_to_decimal_processor_factory = NULL;
    PyObject *var_to_float = NULL;
    PyObject *var_to_str = NULL;
    PyObject *var_int_to_boolean = NULL;
    PyObject *var_DATETIME_RE = NULL;
    PyObject *var_TIME_RE = NULL;
    PyObject *var_DATE_RE = NULL;
    PyObject *var_str_to_datetime = NULL;
    PyObject *var_str_to_time = NULL;
    PyObject *var_str_to_date = NULL;
    struct Nuitka_FrameObject *frame_1564f29d64a4b9fc073e51f0fcac9608;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1564f29d64a4b9fc073e51f0fcac9608 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *locals_sqlalchemy$processors$$$function__2_py_fallback = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[20];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_1 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory(tmp_defaults_1);

        assert(var_to_unicode_processor_factory == NULL);
        var_to_unicode_processor_factory = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[20];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory(tmp_defaults_2);

        assert(var_to_conditional_unicode_processor_factory == NULL);
        var_to_conditional_unicode_processor_factory = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;


        tmp_assign_source_3 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory();

        assert(var_to_decimal_processor_factory == NULL);
        var_to_decimal_processor_factory = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__4_to_float();

        assert(var_to_float == NULL);
        var_to_float = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__5_to_str();

        assert(var_to_str == NULL);
        var_to_str = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__6_int_to_boolean();

        assert(var_int_to_boolean == NULL);
        var_int_to_boolean = tmp_assign_source_6;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_1564f29d64a4b9fc073e51f0fcac9608)) {
        Py_XDECREF(cache_frame_1564f29d64a4b9fc073e51f0fcac9608);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1564f29d64a4b9fc073e51f0fcac9608 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1564f29d64a4b9fc073e51f0fcac9608 = MAKE_FUNCTION_FRAME(tstate, codeobj_1564f29d64a4b9fc073e51f0fcac9608, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1564f29d64a4b9fc073e51f0fcac9608->m_type_description == NULL);
    frame_1564f29d64a4b9fc073e51f0fcac9608 = cache_frame_1564f29d64a4b9fc073e51f0fcac9608;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1564f29d64a4b9fc073e51f0fcac9608);
    assert(Py_REFCNT(frame_1564f29d64a4b9fc073e51f0fcac9608) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1564f29d64a4b9fc073e51f0fcac9608->m_frame.f_lineno = 126;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_DATETIME_RE == NULL);
        var_DATETIME_RE = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1564f29d64a4b9fc073e51f0fcac9608->m_frame.f_lineno = 129;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_TIME_RE == NULL);
        var_TIME_RE = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1564f29d64a4b9fc073e51f0fcac9608->m_frame.f_lineno = 130;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_3,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_DATE_RE == NULL);
        var_DATE_RE = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_DATETIME_RE);
        tmp_args_element_value_1 = var_DATETIME_RE;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[39]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1564f29d64a4b9fc073e51f0fcac9608->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_str_to_datetime == NULL);
        var_str_to_datetime = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_TIME_RE);
        tmp_args_element_value_3 = var_TIME_RE;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[40]);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1564f29d64a4b9fc073e51f0fcac9608->m_frame.f_lineno = 135;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_str_to_time == NULL);
        var_str_to_time = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_DATE_RE);
        tmp_args_element_value_5 = var_DATE_RE;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[41]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1564f29d64a4b9fc073e51f0fcac9608->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_str_to_date == NULL);
        var_str_to_date = tmp_assign_source_12;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1564f29d64a4b9fc073e51f0fcac9608, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1564f29d64a4b9fc073e51f0fcac9608->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1564f29d64a4b9fc073e51f0fcac9608, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1564f29d64a4b9fc073e51f0fcac9608,
        type_description_1,
        var_to_unicode_processor_factory,
        var_to_conditional_unicode_processor_factory,
        var_to_decimal_processor_factory,
        var_to_float,
        var_to_str,
        var_int_to_boolean,
        var_DATETIME_RE,
        var_TIME_RE,
        var_DATE_RE,
        var_str_to_datetime,
        var_str_to_time,
        var_str_to_date
    );


    // Release cached frame if used for exception.
    if (frame_1564f29d64a4b9fc073e51f0fcac9608 == cache_frame_1564f29d64a4b9fc073e51f0fcac9608) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1564f29d64a4b9fc073e51f0fcac9608);
        cache_frame_1564f29d64a4b9fc073e51f0fcac9608 = NULL;
    }

    assertFrameObject(frame_1564f29d64a4b9fc073e51f0fcac9608);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    if (locals_sqlalchemy$processors$$$function__2_py_fallback == NULL) locals_sqlalchemy$processors$$$function__2_py_fallback = MAKE_DICT_EMPTY();
    tmp_return_value = locals_sqlalchemy$processors$$$function__2_py_fallback;
    Py_INCREF(tmp_return_value);
    if (var_to_unicode_processor_factory != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_to_unicode_processor_factory);
        value = var_to_unicode_processor_factory;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[21], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[21]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_to_conditional_unicode_processor_factory != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_to_conditional_unicode_processor_factory);
        value = var_to_conditional_unicode_processor_factory;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[23], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[23]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_to_decimal_processor_factory != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_to_decimal_processor_factory);
        value = var_to_decimal_processor_factory;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[25], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[25]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_to_float != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_to_float);
        value = var_to_float;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[27], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[27]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_to_str != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_to_str);
        value = var_to_str;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[29], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[29]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_int_to_boolean != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_int_to_boolean);
        value = var_int_to_boolean;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[31], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[31]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_DATETIME_RE != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_DATETIME_RE);
        value = var_DATETIME_RE;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[42], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[42]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_TIME_RE != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_TIME_RE);
        value = var_TIME_RE;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[43], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[43]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_DATE_RE != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_DATE_RE);
        value = var_DATE_RE;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[44], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[44]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_str_to_datetime != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_str_to_datetime);
        value = var_str_to_datetime;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[45], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[45]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_str_to_time != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_str_to_time);
        value = var_str_to_time;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[46], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[46]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    if (var_str_to_date != NULL) {
        PyObject *value;
        CHECK_OBJECT(var_str_to_date);
        value = var_str_to_date;

        UPDATE_STRING_DICT0((PyDictObject *)tmp_return_value, (Nuitka_StringObject *)mod_consts[47], value);
    } else {
        if (DICT_REMOVE_ITEM(tmp_return_value, mod_consts[47]) == false) {
            CLEAR_ERROR_OCCURRED(tstate);
        }
    }

    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_to_unicode_processor_factory);
    Py_DECREF(var_to_unicode_processor_factory);
    var_to_unicode_processor_factory = NULL;
    CHECK_OBJECT(var_to_conditional_unicode_processor_factory);
    Py_DECREF(var_to_conditional_unicode_processor_factory);
    var_to_conditional_unicode_processor_factory = NULL;
    CHECK_OBJECT(var_to_decimal_processor_factory);
    Py_DECREF(var_to_decimal_processor_factory);
    var_to_decimal_processor_factory = NULL;
    CHECK_OBJECT(var_to_float);
    Py_DECREF(var_to_float);
    var_to_float = NULL;
    CHECK_OBJECT(var_to_str);
    Py_DECREF(var_to_str);
    var_to_str = NULL;
    CHECK_OBJECT(var_int_to_boolean);
    Py_DECREF(var_int_to_boolean);
    var_int_to_boolean = NULL;
    CHECK_OBJECT(var_DATETIME_RE);
    Py_DECREF(var_DATETIME_RE);
    var_DATETIME_RE = NULL;
    CHECK_OBJECT(var_TIME_RE);
    Py_DECREF(var_TIME_RE);
    var_TIME_RE = NULL;
    CHECK_OBJECT(var_DATE_RE);
    Py_DECREF(var_DATE_RE);
    var_DATE_RE = NULL;
    CHECK_OBJECT(var_str_to_datetime);
    Py_DECREF(var_str_to_datetime);
    var_str_to_datetime = NULL;
    CHECK_OBJECT(var_str_to_time);
    Py_DECREF(var_str_to_time);
    var_str_to_time = NULL;
    CHECK_OBJECT(var_str_to_date);
    Py_DECREF(var_str_to_date);
    var_str_to_date = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_to_unicode_processor_factory);
    Py_DECREF(var_to_unicode_processor_factory);
    var_to_unicode_processor_factory = NULL;
    CHECK_OBJECT(var_to_conditional_unicode_processor_factory);
    Py_DECREF(var_to_conditional_unicode_processor_factory);
    var_to_conditional_unicode_processor_factory = NULL;
    CHECK_OBJECT(var_to_decimal_processor_factory);
    Py_DECREF(var_to_decimal_processor_factory);
    var_to_decimal_processor_factory = NULL;
    CHECK_OBJECT(var_to_float);
    Py_DECREF(var_to_float);
    var_to_float = NULL;
    CHECK_OBJECT(var_to_str);
    Py_DECREF(var_to_str);
    var_to_str = NULL;
    CHECK_OBJECT(var_int_to_boolean);
    Py_DECREF(var_int_to_boolean);
    var_int_to_boolean = NULL;
    Py_XDECREF(var_DATETIME_RE);
    var_DATETIME_RE = NULL;
    Py_XDECREF(var_TIME_RE);
    var_TIME_RE = NULL;
    Py_XDECREF(var_DATE_RE);
    var_DATE_RE = NULL;
    Py_XDECREF(var_str_to_datetime);
    var_str_to_datetime = NULL;
    Py_XDECREF(var_str_to_time);
    var_str_to_time = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    Py_XDECREF(locals_sqlalchemy$processors$$$function__2_py_fallback);

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_sqlalchemy$processors$$$function__2_py_fallback);


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    struct Nuitka_CellObject *par_errors = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_decoder = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_FrameObject *frame_35c3c6f92baede0de8e52f6a560e42d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_35c3c6f92baede0de8e52f6a560e42d9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_35c3c6f92baede0de8e52f6a560e42d9)) {
        Py_XDECREF(cache_frame_35c3c6f92baede0de8e52f6a560e42d9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35c3c6f92baede0de8e52f6a560e42d9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35c3c6f92baede0de8e52f6a560e42d9 = MAKE_FUNCTION_FRAME(tstate, codeobj_35c3c6f92baede0de8e52f6a560e42d9, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_35c3c6f92baede0de8e52f6a560e42d9->m_type_description == NULL);
    frame_35c3c6f92baede0de8e52f6a560e42d9 = cache_frame_35c3c6f92baede0de8e52f6a560e42d9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_35c3c6f92baede0de8e52f6a560e42d9);
    assert(Py_REFCNT(frame_35c3c6f92baede0de8e52f6a560e42d9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        frame_35c3c6f92baede0de8e52f6a560e42d9->m_frame.f_lineno = 68;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[49], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_decoder) == NULL);
        PyCell_SET(var_decoder, tmp_assign_source_1);

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_35c3c6f92baede0de8e52f6a560e42d9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35c3c6f92baede0de8e52f6a560e42d9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35c3c6f92baede0de8e52f6a560e42d9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35c3c6f92baede0de8e52f6a560e42d9,
        type_description_1,
        par_encoding,
        par_errors,
        var_decoder,
        var_process
    );


    // Release cached frame if used for exception.
    if (frame_35c3c6f92baede0de8e52f6a560e42d9 == cache_frame_35c3c6f92baede0de8e52f6a560e42d9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_35c3c6f92baede0de8e52f6a560e42d9);
        cache_frame_35c3c6f92baede0de8e52f6a560e42d9 = NULL;
    }

    assertFrameObject(frame_35c3c6f92baede0de8e52f6a560e42d9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_decoder;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_errors;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decoder);
    Py_DECREF(var_decoder);
    var_decoder = NULL;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory$$$function__1_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_086ef60baa65d4ba5e0b083f678d38bd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_086ef60baa65d4ba5e0b083f678d38bd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_086ef60baa65d4ba5e0b083f678d38bd)) {
        Py_XDECREF(cache_frame_086ef60baa65d4ba5e0b083f678d38bd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_086ef60baa65d4ba5e0b083f678d38bd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_086ef60baa65d4ba5e0b083f678d38bd = MAKE_FUNCTION_FRAME(tstate, codeobj_086ef60baa65d4ba5e0b083f678d38bd, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_086ef60baa65d4ba5e0b083f678d38bd->m_type_description == NULL);
    frame_086ef60baa65d4ba5e0b083f678d38bd = cache_frame_086ef60baa65d4ba5e0b083f678d38bd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_086ef60baa65d4ba5e0b083f678d38bd);
    assert(Py_REFCNT(frame_086ef60baa65d4ba5e0b083f678d38bd) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 77;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 77;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_086ef60baa65d4ba5e0b083f678d38bd->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[53];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_086ef60baa65d4ba5e0b083f678d38bd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_086ef60baa65d4ba5e0b083f678d38bd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_086ef60baa65d4ba5e0b083f678d38bd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_086ef60baa65d4ba5e0b083f678d38bd,
        type_description_1,
        par_value,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_086ef60baa65d4ba5e0b083f678d38bd == cache_frame_086ef60baa65d4ba5e0b083f678d38bd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_086ef60baa65d4ba5e0b083f678d38bd);
        cache_frame_086ef60baa65d4ba5e0b083f678d38bd = NULL;
    }

    assertFrameObject(frame_086ef60baa65d4ba5e0b083f678d38bd);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    struct Nuitka_CellObject *par_errors = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_decoder = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_FrameObject *frame_7243051851fb179ba8d36ceed8bf44a4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7243051851fb179ba8d36ceed8bf44a4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7243051851fb179ba8d36ceed8bf44a4)) {
        Py_XDECREF(cache_frame_7243051851fb179ba8d36ceed8bf44a4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7243051851fb179ba8d36ceed8bf44a4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7243051851fb179ba8d36ceed8bf44a4 = MAKE_FUNCTION_FRAME(tstate, codeobj_7243051851fb179ba8d36ceed8bf44a4, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7243051851fb179ba8d36ceed8bf44a4->m_type_description == NULL);
    frame_7243051851fb179ba8d36ceed8bf44a4 = cache_frame_7243051851fb179ba8d36ceed8bf44a4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7243051851fb179ba8d36ceed8bf44a4);
    assert(Py_REFCNT(frame_7243051851fb179ba8d36ceed8bf44a4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        frame_7243051851fb179ba8d36ceed8bf44a4->m_frame.f_lineno = 82;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[49], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_decoder) == NULL);
        PyCell_SET(var_decoder, tmp_assign_source_1);

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7243051851fb179ba8d36ceed8bf44a4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7243051851fb179ba8d36ceed8bf44a4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7243051851fb179ba8d36ceed8bf44a4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7243051851fb179ba8d36ceed8bf44a4,
        type_description_1,
        par_encoding,
        par_errors,
        var_decoder,
        var_process
    );


    // Release cached frame if used for exception.
    if (frame_7243051851fb179ba8d36ceed8bf44a4 == cache_frame_7243051851fb179ba8d36ceed8bf44a4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7243051851fb179ba8d36ceed8bf44a4);
        cache_frame_7243051851fb179ba8d36ceed8bf44a4 = NULL;
    }

    assertFrameObject(frame_7243051851fb179ba8d36ceed8bf44a4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_decoder;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_errors;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_decoder);
    Py_DECREF(var_decoder);
    var_decoder = NULL;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory$$$function__1_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_78baae7a618ff09c697c17c7cafc5848;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_78baae7a618ff09c697c17c7cafc5848 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_78baae7a618ff09c697c17c7cafc5848)) {
        Py_XDECREF(cache_frame_78baae7a618ff09c697c17c7cafc5848);

#if _DEBUG_REFCOUNTS
        if (cache_frame_78baae7a618ff09c697c17c7cafc5848 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_78baae7a618ff09c697c17c7cafc5848 = MAKE_FUNCTION_FRAME(tstate, codeobj_78baae7a618ff09c697c17c7cafc5848, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_78baae7a618ff09c697c17c7cafc5848->m_type_description == NULL);
    frame_78baae7a618ff09c697c17c7cafc5848 = cache_frame_78baae7a618ff09c697c17c7cafc5848;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_78baae7a618ff09c697c17c7cafc5848);
    assert(Py_REFCNT(frame_78baae7a618ff09c697c17c7cafc5848) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[55]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[51]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 93;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_args_element_value_1 = par_value;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 93;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_78baae7a618ff09c697c17c7cafc5848->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[53];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_78baae7a618ff09c697c17c7cafc5848, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_78baae7a618ff09c697c17c7cafc5848->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_78baae7a618ff09c697c17c7cafc5848, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_78baae7a618ff09c697c17c7cafc5848,
        type_description_1,
        par_value,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_78baae7a618ff09c697c17c7cafc5848 == cache_frame_78baae7a618ff09c697c17c7cafc5848) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_78baae7a618ff09c697c17c7cafc5848);
        cache_frame_78baae7a618ff09c697c17c7cafc5848 = NULL;
    }

    assertFrameObject(frame_78baae7a618ff09c697c17c7cafc5848);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_target_class = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_scale = python_pars[1];
    struct Nuitka_CellObject *var_fstring = Nuitka_Cell_Empty();
    PyObject *var_process = NULL;
    struct Nuitka_FrameObject *frame_8b329c464b75332183e7d4f269784523;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b329c464b75332183e7d4f269784523 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8b329c464b75332183e7d4f269784523)) {
        Py_XDECREF(cache_frame_8b329c464b75332183e7d4f269784523);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b329c464b75332183e7d4f269784523 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b329c464b75332183e7d4f269784523 = MAKE_FUNCTION_FRAME(tstate, codeobj_8b329c464b75332183e7d4f269784523, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b329c464b75332183e7d4f269784523->m_type_description == NULL);
    frame_8b329c464b75332183e7d4f269784523 = cache_frame_8b329c464b75332183e7d4f269784523;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8b329c464b75332183e7d4f269784523);
    assert(Py_REFCNT(frame_8b329c464b75332183e7d4f269784523) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[56];
        CHECK_OBJECT(par_scale);
        tmp_mod_expr_right_1 = par_scale;
        tmp_assign_source_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "coco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_fstring) == NULL);
        PyCell_SET(var_fstring, tmp_assign_source_1);

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b329c464b75332183e7d4f269784523, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b329c464b75332183e7d4f269784523->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b329c464b75332183e7d4f269784523, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b329c464b75332183e7d4f269784523,
        type_description_1,
        par_target_class,
        par_scale,
        var_fstring,
        var_process
    );


    // Release cached frame if used for exception.
    if (frame_8b329c464b75332183e7d4f269784523 == cache_frame_8b329c464b75332183e7d4f269784523) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b329c464b75332183e7d4f269784523);
        cache_frame_8b329c464b75332183e7d4f269784523 = NULL;
    }

    assertFrameObject(frame_8b329c464b75332183e7d4f269784523);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var_fstring;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_target_class;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory$$$function__1_process(tmp_closure_1);

        assert(var_process == NULL);
        var_process = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_process);
    tmp_return_value = var_process;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fstring);
    Py_DECREF(var_fstring);
    var_fstring = NULL;
    CHECK_OBJECT(var_process);
    Py_DECREF(var_process);
    var_process = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_target_class);
    Py_DECREF(par_target_class);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_target_class);
    Py_DECREF(par_target_class);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory$$$function__1_process(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_85fbea188489e0da5be215e53f2c2983;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_85fbea188489e0da5be215e53f2c2983 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_85fbea188489e0da5be215e53f2c2983)) {
        Py_XDECREF(cache_frame_85fbea188489e0da5be215e53f2c2983);

#if _DEBUG_REFCOUNTS
        if (cache_frame_85fbea188489e0da5be215e53f2c2983 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_85fbea188489e0da5be215e53f2c2983 = MAKE_FUNCTION_FRAME(tstate, codeobj_85fbea188489e0da5be215e53f2c2983, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_85fbea188489e0da5be215e53f2c2983->m_type_description == NULL);
    frame_85fbea188489e0da5be215e53f2c2983 = cache_frame_85fbea188489e0da5be215e53f2c2983;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_85fbea188489e0da5be215e53f2c2983);
    assert(Py_REFCNT(frame_85fbea188489e0da5be215e53f2c2983) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 104;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 104;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_left_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_value);
        tmp_mod_expr_right_1 = par_value;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        frame_85fbea188489e0da5be215e53f2c2983->m_frame.f_lineno = 104;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_85fbea188489e0da5be215e53f2c2983, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_85fbea188489e0da5be215e53f2c2983->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_85fbea188489e0da5be215e53f2c2983, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_85fbea188489e0da5be215e53f2c2983,
        type_description_1,
        par_value,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_85fbea188489e0da5be215e53f2c2983 == cache_frame_85fbea188489e0da5be215e53f2c2983) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_85fbea188489e0da5be215e53f2c2983);
        cache_frame_85fbea188489e0da5be215e53f2c2983 = NULL;
    }

    assertFrameObject(frame_85fbea188489e0da5be215e53f2c2983);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__4_to_float(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_4483c2e595d2bde3cdf4729024eaf89b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4483c2e595d2bde3cdf4729024eaf89b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4483c2e595d2bde3cdf4729024eaf89b)) {
        Py_XDECREF(cache_frame_4483c2e595d2bde3cdf4729024eaf89b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4483c2e595d2bde3cdf4729024eaf89b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4483c2e595d2bde3cdf4729024eaf89b = MAKE_FUNCTION_FRAME(tstate, codeobj_4483c2e595d2bde3cdf4729024eaf89b, module_sqlalchemy$processors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4483c2e595d2bde3cdf4729024eaf89b->m_type_description == NULL);
    frame_4483c2e595d2bde3cdf4729024eaf89b = cache_frame_4483c2e595d2bde3cdf4729024eaf89b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4483c2e595d2bde3cdf4729024eaf89b);
    assert(Py_REFCNT(frame_4483c2e595d2bde3cdf4729024eaf89b) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT(par_value);
        tmp_float_arg_1 = par_value;
        tmp_return_value = TO_FLOAT(tmp_float_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4483c2e595d2bde3cdf4729024eaf89b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4483c2e595d2bde3cdf4729024eaf89b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4483c2e595d2bde3cdf4729024eaf89b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4483c2e595d2bde3cdf4729024eaf89b,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_4483c2e595d2bde3cdf4729024eaf89b == cache_frame_4483c2e595d2bde3cdf4729024eaf89b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4483c2e595d2bde3cdf4729024eaf89b);
        cache_frame_4483c2e595d2bde3cdf4729024eaf89b = NULL;
    }

    assertFrameObject(frame_4483c2e595d2bde3cdf4729024eaf89b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__5_to_str(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_93b37e2cca73cf8295d24d1961c8367c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_93b37e2cca73cf8295d24d1961c8367c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_93b37e2cca73cf8295d24d1961c8367c)) {
        Py_XDECREF(cache_frame_93b37e2cca73cf8295d24d1961c8367c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_93b37e2cca73cf8295d24d1961c8367c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_93b37e2cca73cf8295d24d1961c8367c = MAKE_FUNCTION_FRAME(tstate, codeobj_93b37e2cca73cf8295d24d1961c8367c, module_sqlalchemy$processors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_93b37e2cca73cf8295d24d1961c8367c->m_type_description == NULL);
    frame_93b37e2cca73cf8295d24d1961c8367c = cache_frame_93b37e2cca73cf8295d24d1961c8367c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_93b37e2cca73cf8295d24d1961c8367c);
    assert(Py_REFCNT(frame_93b37e2cca73cf8295d24d1961c8367c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_93b37e2cca73cf8295d24d1961c8367c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_93b37e2cca73cf8295d24d1961c8367c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_93b37e2cca73cf8295d24d1961c8367c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_93b37e2cca73cf8295d24d1961c8367c,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_93b37e2cca73cf8295d24d1961c8367c == cache_frame_93b37e2cca73cf8295d24d1961c8367c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_93b37e2cca73cf8295d24d1961c8367c);
        cache_frame_93b37e2cca73cf8295d24d1961c8367c = NULL;
    }

    assertFrameObject(frame_93b37e2cca73cf8295d24d1961c8367c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__6_int_to_boolean(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_c31f7bdee78896e86dcd4a7f0cb1206d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d)) {
        Py_XDECREF(cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d = MAKE_FUNCTION_FRAME(tstate, codeobj_c31f7bdee78896e86dcd4a7f0cb1206d, module_sqlalchemy$processors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d->m_type_description == NULL);
    frame_c31f7bdee78896e86dcd4a7f0cb1206d = cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c31f7bdee78896e86dcd4a7f0cb1206d);
    assert(Py_REFCNT(frame_c31f7bdee78896e86dcd4a7f0cb1206d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(par_value);
        tmp_value_value_1 = par_value;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c31f7bdee78896e86dcd4a7f0cb1206d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c31f7bdee78896e86dcd4a7f0cb1206d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c31f7bdee78896e86dcd4a7f0cb1206d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c31f7bdee78896e86dcd4a7f0cb1206d,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_c31f7bdee78896e86dcd4a7f0cb1206d == cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d);
        cache_frame_c31f7bdee78896e86dcd4a7f0cb1206d = NULL;
    }

    assertFrameObject(frame_c31f7bdee78896e86dcd4a7f0cb1206d);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__3_to_unicode_processor_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    PyObject *par_errors = python_pars[1];
    struct Nuitka_FrameObject *frame_05bece075be169b1bb8bca234af79675;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_05bece075be169b1bb8bca234af79675 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05bece075be169b1bb8bca234af79675)) {
        Py_XDECREF(cache_frame_05bece075be169b1bb8bca234af79675);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05bece075be169b1bb8bca234af79675 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05bece075be169b1bb8bca234af79675 = MAKE_FUNCTION_FRAME(tstate, codeobj_05bece075be169b1bb8bca234af79675, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05bece075be169b1bb8bca234af79675->m_type_description == NULL);
    frame_05bece075be169b1bb8bca234af79675 = cache_frame_05bece075be169b1bb8bca234af79675;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_05bece075be169b1bb8bca234af79675);
    assert(Py_REFCNT(frame_05bece075be169b1bb8bca234af79675) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_errors);
        tmp_cmp_expr_left_1 = par_errors;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_2 = par_errors;
        frame_05bece075be169b1bb8bca234af79675->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_3 = par_encoding;
        frame_05bece075be169b1bb8bca234af79675->m_frame.f_lineno = 158;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05bece075be169b1bb8bca234af79675, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05bece075be169b1bb8bca234af79675->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05bece075be169b1bb8bca234af79675, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05bece075be169b1bb8bca234af79675,
        type_description_1,
        par_encoding,
        par_errors
    );


    // Release cached frame if used for exception.
    if (frame_05bece075be169b1bb8bca234af79675 == cache_frame_05bece075be169b1bb8bca234af79675) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05bece075be169b1bb8bca234af79675);
        cache_frame_05bece075be169b1bb8bca234af79675 = NULL;
    }

    assertFrameObject(frame_05bece075be169b1bb8bca234af79675);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__4_to_conditional_unicode_processor_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_encoding = python_pars[0];
    PyObject *par_errors = python_pars[1];
    struct Nuitka_FrameObject *frame_dc77bd9eea8f413bc03e68952397d102;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dc77bd9eea8f413bc03e68952397d102 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dc77bd9eea8f413bc03e68952397d102)) {
        Py_XDECREF(cache_frame_dc77bd9eea8f413bc03e68952397d102);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dc77bd9eea8f413bc03e68952397d102 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dc77bd9eea8f413bc03e68952397d102 = MAKE_FUNCTION_FRAME(tstate, codeobj_dc77bd9eea8f413bc03e68952397d102, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dc77bd9eea8f413bc03e68952397d102->m_type_description == NULL);
    frame_dc77bd9eea8f413bc03e68952397d102 = cache_frame_dc77bd9eea8f413bc03e68952397d102;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_dc77bd9eea8f413bc03e68952397d102);
    assert(Py_REFCNT(frame_dc77bd9eea8f413bc03e68952397d102) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_errors);
        tmp_cmp_expr_left_1 = par_errors;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_1 = par_encoding;
        CHECK_OBJECT(par_errors);
        tmp_args_element_value_2 = par_errors;
        frame_dc77bd9eea8f413bc03e68952397d102->m_frame.f_lineno = 162;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[61]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_3 = par_encoding;
        frame_dc77bd9eea8f413bc03e68952397d102->m_frame.f_lineno = 164;
        tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[61]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dc77bd9eea8f413bc03e68952397d102, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dc77bd9eea8f413bc03e68952397d102->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dc77bd9eea8f413bc03e68952397d102, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dc77bd9eea8f413bc03e68952397d102,
        type_description_1,
        par_encoding,
        par_errors
    );


    // Release cached frame if used for exception.
    if (frame_dc77bd9eea8f413bc03e68952397d102 == cache_frame_dc77bd9eea8f413bc03e68952397d102) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dc77bd9eea8f413bc03e68952397d102);
        cache_frame_dc77bd9eea8f413bc03e68952397d102 = NULL;
    }

    assertFrameObject(frame_dc77bd9eea8f413bc03e68952397d102);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    CHECK_OBJECT(par_errors);
    Py_DECREF(par_errors);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlalchemy$processors$$$function__5_to_decimal_processor_factory(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_target_class = python_pars[0];
    PyObject *par_scale = python_pars[1];
    struct Nuitka_FrameObject *frame_1899fdf0132079614fd7bddbb943cea8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1899fdf0132079614fd7bddbb943cea8 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1899fdf0132079614fd7bddbb943cea8)) {
        Py_XDECREF(cache_frame_1899fdf0132079614fd7bddbb943cea8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1899fdf0132079614fd7bddbb943cea8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1899fdf0132079614fd7bddbb943cea8 = MAKE_FUNCTION_FRAME(tstate, codeobj_1899fdf0132079614fd7bddbb943cea8, module_sqlalchemy$processors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1899fdf0132079614fd7bddbb943cea8->m_type_description == NULL);
    frame_1899fdf0132079614fd7bddbb943cea8 = cache_frame_1899fdf0132079614fd7bddbb943cea8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1899fdf0132079614fd7bddbb943cea8);
    assert(Py_REFCNT(frame_1899fdf0132079614fd7bddbb943cea8) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_target_class);
        tmp_args_element_value_1 = par_target_class;
        tmp_mod_expr_left_1 = mod_consts[56];
        CHECK_OBJECT(par_scale);
        tmp_mod_expr_right_1 = par_scale;
        tmp_args_element_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_1899fdf0132079614fd7bddbb943cea8->m_frame.f_lineno = 172;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_expression_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1899fdf0132079614fd7bddbb943cea8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1899fdf0132079614fd7bddbb943cea8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1899fdf0132079614fd7bddbb943cea8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1899fdf0132079614fd7bddbb943cea8,
        type_description_1,
        par_target_class,
        par_scale
    );


    // Release cached frame if used for exception.
    if (frame_1899fdf0132079614fd7bddbb943cea8 == cache_frame_1899fdf0132079614fd7bddbb943cea8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1899fdf0132079614fd7bddbb943cea8);
        cache_frame_1899fdf0132079614fd7bddbb943cea8 = NULL;
    }

    assertFrameObject(frame_1899fdf0132079614fd7bddbb943cea8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_target_class);
    Py_DECREF(par_target_class);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_target_class);
    Py_DECREF(par_target_class);
    CHECK_OBJECT(par_scale);
    Py_DECREF(par_scale);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a32b31ff0f42174f52e11e31a0275fa8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory$$$function__1_process,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[3],
#endif
        codeobj_06dec2ae7dee56118308a989b56b206d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1564f29d64a4b9fc073e51f0fcac9608,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_35c3c6f92baede0de8e52f6a560e42d9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory$$$function__1_process,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[50],
#endif
        codeobj_086ef60baa65d4ba5e0b083f678d38bd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_7243051851fb179ba8d36ceed8bf44a4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory$$$function__1_process,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_78baae7a618ff09c697c17c7cafc5848,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[26],
#endif
        codeobj_8b329c464b75332183e7d4f269784523,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory$$$function__1_process(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory$$$function__1_process,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_85fbea188489e0da5be215e53f2c2983,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__4_to_float() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__4_to_float,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[28],
#endif
        codeobj_4483c2e595d2bde3cdf4729024eaf89b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__5_to_str() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__5_to_str,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[30],
#endif
        codeobj_93b37e2cca73cf8295d24d1961c8367c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback$$$function__6_int_to_boolean() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__6_int_to_boolean,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[32],
#endif
        codeobj_c31f7bdee78896e86dcd4a7f0cb1206d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__3_to_unicode_processor_factory(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__3_to_unicode_processor_factory,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_05bece075be169b1bb8bca234af79675,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__4_to_conditional_unicode_processor_factory(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__4_to_conditional_unicode_processor_factory,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc77bd9eea8f413bc03e68952397d102,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlalchemy$processors$$$function__5_to_decimal_processor_factory() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlalchemy$processors$$$function__5_to_decimal_processor_factory,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1899fdf0132079614fd7bddbb943cea8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_sqlalchemy$processors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_sqlalchemy$processors[] = {
    impl_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory$$$function__1_process,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__4_to_float,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__5_to_str,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__6_int_to_boolean,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__1_to_unicode_processor_factory$$$function__1_process,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__2_to_conditional_unicode_processor_factory$$$function__1_process,
    impl_sqlalchemy$processors$$$function__2_py_fallback$$$function__3_to_decimal_processor_factory$$$function__1_process,
    impl_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory,
    impl_sqlalchemy$processors$$$function__2_py_fallback,
    impl_sqlalchemy$processors$$$function__3_to_unicode_processor_factory,
    impl_sqlalchemy$processors$$$function__4_to_conditional_unicode_processor_factory,
    impl_sqlalchemy$processors$$$function__5_to_decimal_processor_factory,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_sqlalchemy$processors;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && HAS_ERROR_OCCURRED(tstate)) {
        return NULL;
    }

    if (offset > sizeof(functable_sqlalchemy$processors) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR_STATE(tstate, PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!HAS_ERROR_OCCURRED(tstate));
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!HAS_ERROR_OCCURRED(tstate));

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_sqlalchemy$processors[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_sqlalchemy$processors,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_sqlalchemy$processors(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.processors");

    // Store the module for future use.
    module_sqlalchemy$processors = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("sqlalchemy.processors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlalchemy.processors: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$processors\n");

    moduledict_sqlalchemy$processors = MODULE_DICT(module_sqlalchemy$processors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$processors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$processors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[70]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$processors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$processors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$processors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$processors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlalchemy$processors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_6a0a7ead17131d60b6a18d87a63b802e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[63];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_2);
    }
    frame_6a0a7ead17131d60b6a18d87a63b802e = MAKE_MODULE_FRAME(codeobj_6a0a7ead17131d60b6a18d87a63b802e, module_sqlalchemy$processors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6a0a7ead17131d60b6a18d87a63b802e);
    assert(Py_REFCNT(frame_6a0a7ead17131d60b6a18d87a63b802e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[67], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[68], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[48];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 16;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[39];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 17;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[33];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 18;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[70];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[71];
        tmp_level_value_4 = mod_consts[72];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 20;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[5],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_sqlalchemy$processors$$$function__1_str_to_datetime_processor_factory();

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_sqlalchemy$processors$$$function__2_py_fallback();

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[74];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[75];
        tmp_level_value_5 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 145;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[62],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[62]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[74];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[76];
        tmp_level_value_6 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 146;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[31],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[74];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[77];
        tmp_level_value_7 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 147;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[47],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[74];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[78];
        tmp_level_value_8 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 148;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[45],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[74];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[79];
        tmp_level_value_9 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 149;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[46],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[74];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[80];
        tmp_level_value_10 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 150;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[27],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[74];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[81];
        tmp_level_value_11 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 151;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[29],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[29]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[74];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[82];
        tmp_level_value_12 = mod_consts[53];
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 152;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$processors,
                mod_consts[60],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[60]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[20];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_18 = MAKE_FUNCTION_sqlalchemy$processors$$$function__3_to_unicode_processor_factory(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[20];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_19 = MAKE_FUNCTION_sqlalchemy$processors$$$function__4_to_conditional_unicode_processor_factory(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_sqlalchemy$processors$$$function__5_to_decimal_processor_factory();

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_20);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_6a0a7ead17131d60b6a18d87a63b802e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_6a0a7ead17131d60b6a18d87a63b802e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        tmp_expression_value_1 = (PyObject *)moduledict_sqlalchemy$processors;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[83]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_2;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 176;

            goto try_except_handler_2;
        }
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 176;
        tmp_args_element_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 176;

            goto try_except_handler_2;
        }
        frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = 176;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 144;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame) frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a0a7ead17131d60b6a18d87a63b802e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a0a7ead17131d60b6a18d87a63b802e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a0a7ead17131d60b6a18d87a63b802e, exception_lineno);
    }



    assertFrameObject(frame_6a0a7ead17131d60b6a18d87a63b802e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.processors", false);

    Py_INCREF(module_sqlalchemy$processors);
    return module_sqlalchemy$processors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$processors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$processors", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
