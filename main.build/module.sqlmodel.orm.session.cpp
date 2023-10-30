/* Generated code for Python module 'sqlmodel.orm.session'
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

/* The "module_sqlmodel$orm$session" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlmodel$orm$session;
PyDictObject *moduledict_sqlmodel$orm$session;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[95];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[95];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlmodel.orm.session"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 95; i++) {
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
void checkModuleConstants_sqlmodel$orm$session(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 95; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_66cf1be3e7f2540f122a98a32acf8b13;
static PyCodeObject *codeobj_e56f30e9d0a0078108204a9c82571092;
static PyCodeObject *codeobj_9f6aa39c2c80db267a6070a9f04d43c4;
static PyCodeObject *codeobj_fc1007b0ee3ef8bdda2f2b8c2badedaa;
static PyCodeObject *codeobj_ba37edb12d50d1c707e36dcab0d505ee;
static PyCodeObject *codeobj_f79dce7cdf82465ea3120ea46ee3b3eb;
static PyCodeObject *codeobj_c4f831257e67d6e634495cd1c816938e;
static PyCodeObject *codeobj_b910b3780033161edd5f52aee4f9a0f9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[86]); CHECK_OBJECT(module_filename_obj);
    codeobj_66cf1be3e7f2540f122a98a32acf8b13 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[87], mod_consts[87], NULL, NULL, 0, 0, 0);
    codeobj_e56f30e9d0a0078108204a9c82571092 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[88], NULL, 0, 0, 0);
    codeobj_9f6aa39c2c80db267a6070a9f04d43c4 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_VARKEYWORDS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[89], NULL, 2, 5, 0);
    codeobj_fc1007b0ee3ef8bdda2f2b8c2badedaa = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_VARKEYWORDS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[89], NULL, 2, 5, 0);
    codeobj_ba37edb12d50d1c707e36dcab0d505ee = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[70], mod_consts[70], mod_consts[90], mod_consts[88], 2, 5, 0);
    codeobj_f79dce7cdf82465ea3120ea46ee3b3eb = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[1], mod_consts[1], mod_consts[91], mod_consts[88], 7, 0, 0);
    codeobj_c4f831257e67d6e634495cd1c816938e = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[12], mod_consts[12], mod_consts[92], mod_consts[88], 8, 0, 0);
    codeobj_b910b3780033161edd5f52aee4f9a0f9 = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[10], mod_consts[10], mod_consts[93], mod_consts[88], 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__13_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__1_exec(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__2_exec(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__3_exec(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__4_execute(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__5_query(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__6_get(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_sqlmodel$orm$session$$$function__3_exec(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_statement = python_pars[1];
    PyObject *par_params = python_pars[2];
    PyObject *par_execution_options = python_pars[3];
    PyObject *par_bind_arguments = python_pars[4];
    PyObject *par__parent_execute_state = python_pars[5];
    PyObject *par__add_event = python_pars[6];
    PyObject *par_kw = python_pars[7];
    PyObject *var_results = NULL;
    struct Nuitka_FrameObject *frame_ba37edb12d50d1c707e36dcab0d505ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ba37edb12d50d1c707e36dcab0d505ee = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ba37edb12d50d1c707e36dcab0d505ee)) {
        Py_XDECREF(cache_frame_ba37edb12d50d1c707e36dcab0d505ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba37edb12d50d1c707e36dcab0d505ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba37edb12d50d1c707e36dcab0d505ee = MAKE_FUNCTION_FRAME(tstate, codeobj_ba37edb12d50d1c707e36dcab0d505ee, module_sqlmodel$orm$session, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba37edb12d50d1c707e36dcab0d505ee->m_type_description == NULL);
    frame_ba37edb12d50d1c707e36dcab0d505ee = cache_frame_ba37edb12d50d1c707e36dcab0d505ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ba37edb12d50d1c707e36dcab0d505ee);
    assert(Py_REFCNT(frame_ba37edb12d50d1c707e36dcab0d505ee) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 60;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_sqlmodel$orm$session, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_statement);
        tmp_tuple_element_1 = par_statement;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_params);
        tmp_dict_value_1 = par_params;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_execution_options);
        tmp_dict_value_1 = par_execution_options;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_bind_arguments);
        tmp_dict_value_1 = par_bind_arguments;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par__parent_execute_state);
        tmp_dict_value_1 = par__parent_execute_state;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par__add_event);
        tmp_dict_value_1 = par__add_event;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg4_1 = par_kw;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_1 = impl___main__$$$function__13_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_results == NULL);
        var_results = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_statement);
        tmp_isinstance_inst_1 = par_statement;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_results);
        tmp_called_instance_1 = var_results;
        frame_ba37edb12d50d1c707e36dcab0d505ee->m_frame.f_lineno = 70;
        tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[8]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba37edb12d50d1c707e36dcab0d505ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba37edb12d50d1c707e36dcab0d505ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba37edb12d50d1c707e36dcab0d505ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba37edb12d50d1c707e36dcab0d505ee,
        type_description_1,
        par_self,
        par_statement,
        par_params,
        par_execution_options,
        par_bind_arguments,
        par__parent_execute_state,
        par__add_event,
        par_kw,
        var_results,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ba37edb12d50d1c707e36dcab0d505ee == cache_frame_ba37edb12d50d1c707e36dcab0d505ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba37edb12d50d1c707e36dcab0d505ee);
        cache_frame_ba37edb12d50d1c707e36dcab0d505ee = NULL;
    }

    assertFrameObject(frame_ba37edb12d50d1c707e36dcab0d505ee);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_results);
    tmp_return_value = var_results;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_results);
    Py_DECREF(var_results);
    var_results = NULL;
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

    Py_XDECREF(var_results);
    var_results = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_execution_options);
    Py_DECREF(par_execution_options);
    CHECK_OBJECT(par_bind_arguments);
    Py_DECREF(par_bind_arguments);
    CHECK_OBJECT(par__parent_execute_state);
    Py_DECREF(par__parent_execute_state);
    CHECK_OBJECT(par__add_event);
    Py_DECREF(par__add_event);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_execution_options);
    Py_DECREF(par_execution_options);
    CHECK_OBJECT(par_bind_arguments);
    Py_DECREF(par_bind_arguments);
    CHECK_OBJECT(par__parent_execute_state);
    Py_DECREF(par__parent_execute_state);
    CHECK_OBJECT(par__add_event);
    Py_DECREF(par__add_event);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlmodel$orm$session$$$function__4_execute(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_statement = python_pars[1];
    PyObject *par_params = python_pars[2];
    PyObject *par_execution_options = python_pars[3];
    PyObject *par_bind_arguments = python_pars[4];
    PyObject *par__parent_execute_state = python_pars[5];
    PyObject *par__add_event = python_pars[6];
    PyObject *par_kw = python_pars[7];
    struct Nuitka_FrameObject *frame_f79dce7cdf82465ea3120ea46ee3b3eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb)) {
        Py_XDECREF(cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb = MAKE_FUNCTION_FRAME(tstate, codeobj_f79dce7cdf82465ea3120ea46ee3b3eb, module_sqlmodel$orm$session, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb->m_type_description == NULL);
    frame_f79dce7cdf82465ea3120ea46ee3b3eb = cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f79dce7cdf82465ea3120ea46ee3b3eb);
    assert(Py_REFCNT(frame_f79dce7cdf82465ea3120ea46ee3b3eb) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 101;
            type_description_1 = "ooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_sqlmodel$orm$session, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_statement);
        tmp_tuple_element_1 = par_statement;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[2];
        CHECK_OBJECT(par_params);
        tmp_dict_value_1 = par_params;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[3];
        CHECK_OBJECT(par_execution_options);
        tmp_dict_value_1 = par_execution_options;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[4];
        CHECK_OBJECT(par_bind_arguments);
        tmp_dict_value_1 = par_bind_arguments;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[5];
        CHECK_OBJECT(par__parent_execute_state);
        tmp_dict_value_1 = par__parent_execute_state;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[6];
        CHECK_OBJECT(par__add_event);
        tmp_dict_value_1 = par__add_event;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kw);
        tmp_dircall_arg4_1 = par_kw;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__13_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_f79dce7cdf82465ea3120ea46ee3b3eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f79dce7cdf82465ea3120ea46ee3b3eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f79dce7cdf82465ea3120ea46ee3b3eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f79dce7cdf82465ea3120ea46ee3b3eb,
        type_description_1,
        par_self,
        par_statement,
        par_params,
        par_execution_options,
        par_bind_arguments,
        par__parent_execute_state,
        par__add_event,
        par_kw,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f79dce7cdf82465ea3120ea46ee3b3eb == cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb);
        cache_frame_f79dce7cdf82465ea3120ea46ee3b3eb = NULL;
    }

    assertFrameObject(frame_f79dce7cdf82465ea3120ea46ee3b3eb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_execution_options);
    Py_DECREF(par_execution_options);
    CHECK_OBJECT(par_bind_arguments);
    Py_DECREF(par_bind_arguments);
    CHECK_OBJECT(par__parent_execute_state);
    Py_DECREF(par__parent_execute_state);
    CHECK_OBJECT(par__add_event);
    Py_DECREF(par__add_event);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_statement);
    Py_DECREF(par_statement);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    CHECK_OBJECT(par_execution_options);
    Py_DECREF(par_execution_options);
    CHECK_OBJECT(par_bind_arguments);
    Py_DECREF(par_bind_arguments);
    CHECK_OBJECT(par__parent_execute_state);
    Py_DECREF(par__parent_execute_state);
    CHECK_OBJECT(par__add_event);
    Py_DECREF(par__add_event);
    CHECK_OBJECT(par_kw);
    Py_DECREF(par_kw);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlmodel$orm$session$$$function__5_query(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_entities = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_b910b3780033161edd5f52aee4f9a0f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b910b3780033161edd5f52aee4f9a0f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b910b3780033161edd5f52aee4f9a0f9)) {
        Py_XDECREF(cache_frame_b910b3780033161edd5f52aee4f9a0f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b910b3780033161edd5f52aee4f9a0f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b910b3780033161edd5f52aee4f9a0f9 = MAKE_FUNCTION_FRAME(tstate, codeobj_b910b3780033161edd5f52aee4f9a0f9, module_sqlmodel$orm$session, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b910b3780033161edd5f52aee4f9a0f9->m_type_description == NULL);
    frame_b910b3780033161edd5f52aee4f9a0f9 = cache_frame_b910b3780033161edd5f52aee4f9a0f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b910b3780033161edd5f52aee4f9a0f9);
    assert(Py_REFCNT(frame_b910b3780033161edd5f52aee4f9a0f9) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 121;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_sqlmodel$orm$session, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_entities);
        tmp_dircall_arg2_1 = par_entities;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_b910b3780033161edd5f52aee4f9a0f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b910b3780033161edd5f52aee4f9a0f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b910b3780033161edd5f52aee4f9a0f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b910b3780033161edd5f52aee4f9a0f9,
        type_description_1,
        par_self,
        par_entities,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b910b3780033161edd5f52aee4f9a0f9 == cache_frame_b910b3780033161edd5f52aee4f9a0f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b910b3780033161edd5f52aee4f9a0f9);
        cache_frame_b910b3780033161edd5f52aee4f9a0f9 = NULL;
    }

    assertFrameObject(frame_b910b3780033161edd5f52aee4f9a0f9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_entities);
    Py_DECREF(par_entities);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_entities);
    Py_DECREF(par_entities);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_sqlmodel$orm$session$$$function__6_get(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_entity = python_pars[1];
    PyObject *par_ident = python_pars[2];
    PyObject *par_options = python_pars[3];
    PyObject *par_populate_existing = python_pars[4];
    PyObject *par_with_for_update = python_pars[5];
    PyObject *par_identity_token = python_pars[6];
    PyObject *par_execution_options = python_pars[7];
    struct Nuitka_FrameObject *frame_c4f831257e67d6e634495cd1c816938e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c4f831257e67d6e634495cd1c816938e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c4f831257e67d6e634495cd1c816938e)) {
        Py_XDECREF(cache_frame_c4f831257e67d6e634495cd1c816938e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c4f831257e67d6e634495cd1c816938e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c4f831257e67d6e634495cd1c816938e = MAKE_FUNCTION_FRAME(tstate, codeobj_c4f831257e67d6e634495cd1c816938e, module_sqlmodel$orm$session, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c4f831257e67d6e634495cd1c816938e->m_type_description == NULL);
    frame_c4f831257e67d6e634495cd1c816938e = cache_frame_c4f831257e67d6e634495cd1c816938e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c4f831257e67d6e634495cd1c816938e);
    assert(Py_REFCNT(frame_c4f831257e67d6e634495cd1c816938e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 133;
            type_description_1 = "ooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_sqlmodel$orm$session, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_entity);
        tmp_kw_call_arg_value_0_1 = par_entity;
        CHECK_OBJECT(par_ident);
        tmp_kw_call_arg_value_1_1 = par_ident;
        CHECK_OBJECT(par_options);
        tmp_kw_call_dict_value_0_1 = par_options;
        CHECK_OBJECT(par_populate_existing);
        tmp_kw_call_dict_value_1_1 = par_populate_existing;
        CHECK_OBJECT(par_with_for_update);
        tmp_kw_call_dict_value_2_1 = par_with_for_update;
        CHECK_OBJECT(par_identity_token);
        tmp_kw_call_dict_value_3_1 = par_identity_token;
        CHECK_OBJECT(par_execution_options);
        tmp_kw_call_dict_value_4_1 = par_execution_options;
        frame_c4f831257e67d6e634495cd1c816938e->m_frame.f_lineno = 133;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[13]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooc";
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
        exception_tb = MAKE_TRACEBACK(frame_c4f831257e67d6e634495cd1c816938e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c4f831257e67d6e634495cd1c816938e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c4f831257e67d6e634495cd1c816938e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c4f831257e67d6e634495cd1c816938e,
        type_description_1,
        par_self,
        par_entity,
        par_ident,
        par_options,
        par_populate_existing,
        par_with_for_update,
        par_identity_token,
        par_execution_options,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c4f831257e67d6e634495cd1c816938e == cache_frame_c4f831257e67d6e634495cd1c816938e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c4f831257e67d6e634495cd1c816938e);
        cache_frame_c4f831257e67d6e634495cd1c816938e = NULL;
    }

    assertFrameObject(frame_c4f831257e67d6e634495cd1c816938e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_entity);
    Py_DECREF(par_entity);
    CHECK_OBJECT(par_ident);
    Py_DECREF(par_ident);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    CHECK_OBJECT(par_populate_existing);
    Py_DECREF(par_populate_existing);
    CHECK_OBJECT(par_with_for_update);
    Py_DECREF(par_with_for_update);
    CHECK_OBJECT(par_identity_token);
    Py_DECREF(par_identity_token);
    CHECK_OBJECT(par_execution_options);
    Py_DECREF(par_execution_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_entity);
    Py_DECREF(par_entity);
    CHECK_OBJECT(par_ident);
    Py_DECREF(par_ident);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    CHECK_OBJECT(par_populate_existing);
    Py_DECREF(par_populate_existing);
    CHECK_OBJECT(par_with_for_update);
    Py_DECREF(par_with_for_update);
    CHECK_OBJECT(par_identity_token);
    Py_DECREF(par_identity_token);
    CHECK_OBJECT(par_execution_options);
    Py_DECREF(par_execution_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__1_exec(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_9f6aa39c2c80db267a6070a9f04d43c4,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlmodel$orm$session,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__2_exec(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_fc1007b0ee3ef8bdda2f2b8c2badedaa,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlmodel$orm$session,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__3_exec(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlmodel$orm$session$$$function__3_exec,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_ba37edb12d50d1c707e36dcab0d505ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_sqlmodel$orm$session,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__4_execute(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlmodel$orm$session$$$function__4_execute,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_f79dce7cdf82465ea3120ea46ee3b3eb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$orm$session,
        mod_consts[9],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__5_query(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlmodel$orm$session$$$function__5_query,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_b910b3780033161edd5f52aee4f9a0f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$orm$session,
        mod_consts[11],
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_sqlmodel$orm$session$$$function__6_get(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_sqlmodel$orm$session$$$function__6_get,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_c4f831257e67d6e634495cd1c816938e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_sqlmodel$orm$session,
        NULL,
        closure,
        1
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

function_impl_code functable_sqlmodel$orm$session[] = {
    NULL,
    NULL,
    impl_sqlmodel$orm$session$$$function__3_exec,
    impl_sqlmodel$orm$session$$$function__4_execute,
    impl_sqlmodel$orm$session$$$function__5_query,
    impl_sqlmodel$orm$session$$$function__6_get,
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

    function_impl_code *current = functable_sqlmodel$orm$session;
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

    if (offset > sizeof(functable_sqlmodel$orm$session) || offset < 0) {
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
        functable_sqlmodel$orm$session[offset],
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
        module_sqlmodel$orm$session,
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
PyObject *modulecode_sqlmodel$orm$session(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlmodel.orm.session");

    // Store the module for future use.
    module_sqlmodel$orm$session = module;

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
        PRINT_STRING("sqlmodel.orm.session: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlmodel.orm.session: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlmodel$orm$session\n");

    moduledict_sqlmodel$orm$session = MODULE_DICT(module_sqlmodel$orm$session);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlmodel$orm$session,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlmodel$orm$session,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[94]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlmodel$orm$session,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlmodel$orm$session,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlmodel$orm$session,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlmodel$orm$session);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlmodel$orm$session);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_66cf1be3e7f2540f122a98a32acf8b13;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *locals_sqlmodel$orm$session$$$class__1_Session_16 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_e56f30e9d0a0078108204a9c82571092_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_2);
    }
    frame_66cf1be3e7f2540f122a98a32acf8b13 = MAKE_MODULE_FRAME(codeobj_66cf1be3e7f2540f122a98a32acf8b13, module_sqlmodel$orm$session);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_66cf1be3e7f2540f122a98a32acf8b13);
    assert(Py_REFCNT(frame_66cf1be3e7f2540f122a98a32acf8b13) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[18], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_4 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_4);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[20],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[20]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[22],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[22]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[23],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[23]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[24],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[24]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[25],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[25]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[26],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[26]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[27],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[27]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[28],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[28]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_12);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[29];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlmodel$orm$session;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[30];
        tmp_level_value_1 = mod_consts[21];
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 3;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[31],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[32];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlmodel$orm$session;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[33];
        tmp_level_value_2 = mod_consts[21];
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 4;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[34],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[32];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlmodel$orm$session;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[36];
        tmp_level_value_3 = mod_consts[21];
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 5;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[37],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[39];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlmodel$orm$session;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[40];
        tmp_level_value_4 = mod_consts[21];
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 6;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[41],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[43];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlmodel$orm$session;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[44];
        tmp_level_value_5 = mod_consts[21];
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 7;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[45],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[46];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlmodel$orm$session;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[47];
        tmp_level_value_6 = mod_consts[48];
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 9;
        tmp_assign_source_18 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[49],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[49]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[50],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[50]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_20);
    }
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[51];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlmodel$orm$session;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[40];
        tmp_level_value_7 = mod_consts[48];
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 10;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[41],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[52];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlmodel$orm$session;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[53];
        tmp_level_value_8 = mod_consts[48];
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 11;
        tmp_assign_source_22 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[54],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[54]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_sqlmodel$orm$session,
                mod_consts[7],
                mod_consts[21]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[7]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_24);
    }
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 13;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[55]);

        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_25);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[38]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_26, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_27 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[21];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_29;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[57]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[57]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[37];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 16;
        tmp_assign_source_30 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[58]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_9;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[59];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_9 = mod_consts[60];
        tmp_default_value_1 = mod_consts[61];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_9, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[60]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 16;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_31;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_32;
        outline_0_var___class__ = Nuitka_Cell_Empty();
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_sqlmodel$orm$session$$$class__1_Session_16 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[63], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[37];
        tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[64], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        frame_e56f30e9d0a0078108204a9c82571092_2 = MAKE_CLASS_FRAME(tstate, codeobj_e56f30e9d0a0078108204a9c82571092, module_sqlmodel$orm$session, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_e56f30e9d0a0078108204a9c82571092_2);
        assert(Py_REFCNT(frame_e56f30e9d0a0078108204a9c82571092_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_kw_defaults_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_2;
            tmp_called_value_3 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[28]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[28]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 17;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_key_1 = mod_consts[2];
            tmp_dict_value_1 = Py_None;
            tmp_kw_defaults_1 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_7;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[3];
                tmp_expression_value_7 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[31]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
                            type_description_2 = "c";
                            goto dict_build_exception_1;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto dict_build_exception_1;
                    }
                }

                tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[65]);
                Py_DECREF(tmp_expression_value_7);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_2 = "c";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[4];
                tmp_dict_value_1 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[5];
                tmp_dict_value_1 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[6];
                tmp_dict_value_1 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_1, tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_dict_key_2 = mod_consts[66];
            tmp_expression_value_8 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[54]);

            if (tmp_expression_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[54]);

                    if (unlikely(tmp_expression_value_8 == NULL)) {
                        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
                    }

                    if (tmp_expression_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_kw_defaults_1);

                        exception_lineno = 20;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

            if (tmp_subscript_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_2 == NULL)) {
                        tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_subscript_value_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_kw_defaults_1);
                        Py_DECREF(tmp_expression_value_8);

                        exception_lineno = 20;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_2);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_8);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_kw_defaults_1);

                exception_lineno = 20;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_3;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_4;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_subscript_value_10;
                PyObject *tmp_tuple_element_8;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_11;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_13;
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[2];
                tmp_expression_value_9 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 22;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_10 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[27]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_9);

                            exception_lineno = 22;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_11 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_9);
                            Py_DECREF(tmp_expression_value_10);

                            exception_lineno = 22;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_5 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 22;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_5);
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_5);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_11);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_9);
                    Py_DECREF(tmp_expression_value_10);

                    exception_lineno = 22;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_12;
                    PyObject *tmp_subscript_value_6;
                    PyObject *tmp_expression_value_13;
                    PyObject *tmp_subscript_value_7;
                    PyObject *tmp_tuple_element_6;
                    PyTuple_SET_ITEM(tmp_subscript_value_4, 0, tmp_tuple_element_4);
                    tmp_expression_value_12 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[24]);

                    if (tmp_expression_value_12 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_12 == NULL)) {
                                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_12 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 22;
                                type_description_2 = "c";
                                goto tuple_build_exception_3;
                            }
                            Py_INCREF(tmp_expression_value_12);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_expression_value_13 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                    if (tmp_expression_value_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                            if (unlikely(tmp_expression_value_13 == NULL)) {
                                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                            }

                            if (tmp_expression_value_13 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_12);

                                exception_lineno = 22;
                                type_description_2 = "c";
                                goto tuple_build_exception_3;
                            }
                            Py_INCREF(tmp_expression_value_13);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_tuple_element_6 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                    if (tmp_tuple_element_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_6);
                        } else {
                            goto tuple_build_exception_3;
                        }
                    }

                    tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_6);
                    tmp_tuple_element_6 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                    if (tmp_tuple_element_6 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_tuple_element_6 == NULL)) {
                                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_tuple_element_6 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 22;
                                type_description_2 = "c";
                                goto tuple_build_exception_4;
                            }
                            Py_INCREF(tmp_tuple_element_6);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_6);
                    goto tuple_build_noexception_3;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_4:;
                    Py_DECREF(tmp_expression_value_12);
                    Py_DECREF(tmp_expression_value_13);
                    Py_DECREF(tmp_subscript_value_7);
                    goto tuple_build_exception_3;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_3:;
                    tmp_subscript_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_7);
                    Py_DECREF(tmp_expression_value_13);
                    Py_DECREF(tmp_subscript_value_7);
                    if (tmp_subscript_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_12);

                        exception_lineno = 22;
                        type_description_2 = "c";
                        goto tuple_build_exception_3;
                    }
                    tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
                    Py_DECREF(tmp_expression_value_12);
                    Py_DECREF(tmp_subscript_value_6);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 22;
                        type_description_2 = "c";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_4, 1, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_4);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_10);
                Py_DECREF(tmp_subscript_value_4);
                if (tmp_subscript_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_9);

                    exception_lineno = 22;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_9);
                Py_DECREF(tmp_subscript_value_3);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 22;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[3];
                tmp_expression_value_14 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_7 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 23;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_7);
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_8);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_14);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 23;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[4];
                tmp_expression_value_15 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_15 == NULL)) {
                            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_15 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_15);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_16 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_15);

                            exception_lineno = 24;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_8 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 24;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_8);
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_6:;
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_10);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                tmp_subscript_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_16);
                Py_DECREF(tmp_subscript_value_10);
                if (tmp_subscript_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_15);

                    exception_lineno = 24;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_15);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[5];
                tmp_expression_value_17 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 25;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_11 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_11 == NULL)) {
                            tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_11 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_17);

                            exception_lineno = 25;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_11);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_11);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 25;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[6];
                tmp_expression_value_18 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 26;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_12 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_12 == NULL)) {
                            tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_18);

                            exception_lineno = 26;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_12);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 26;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[68];
                tmp_dict_value_2 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 27;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[69];
                tmp_expression_value_19 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[49]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[49]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 28;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_subscript_value_13 == NULL)) {
                            tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                        }

                        if (tmp_subscript_value_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_19);

                            exception_lineno = 28;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 28;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_defaults_1);
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;


            tmp_args_element_value_1 = MAKE_FUNCTION_sqlmodel$orm$session$$$function__1_exec(tmp_kw_defaults_1, tmp_annotations_1);

            frame_e56f30e9d0a0078108204a9c82571092_2->m_frame.f_lineno = 17;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 17;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_kw_defaults_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_14;
            tmp_called_value_4 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[28]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[28]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 31;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_key_3 = mod_consts[2];
            tmp_dict_value_3 = Py_None;
            tmp_kw_defaults_2 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_20;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[3];
                tmp_expression_value_20 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[31]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[65]);
                Py_DECREF(tmp_expression_value_20);
                if (tmp_dict_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[4];
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[5];
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[6];
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_defaults_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;
            tmp_dict_key_4 = mod_consts[66];
            tmp_expression_value_21 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[7]);

            if (tmp_expression_value_21 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[7]);

                    if (unlikely(tmp_expression_value_21 == NULL)) {
                        tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                    }

                    if (tmp_expression_value_21 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);
                        Py_DECREF(tmp_kw_defaults_2);

                        exception_lineno = 34;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_21);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_14 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

            if (tmp_subscript_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_14 == NULL)) {
                        tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_subscript_value_14 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_4);
                        Py_DECREF(tmp_kw_defaults_2);
                        Py_DECREF(tmp_expression_value_21);

                        exception_lineno = 34;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_14);
            Py_DECREF(tmp_expression_value_21);
            Py_DECREF(tmp_subscript_value_14);
            if (tmp_dict_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);
                Py_DECREF(tmp_kw_defaults_2);

                exception_lineno = 34;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_tuple_element_10;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_subscript_value_20;
                PyObject *tmp_tuple_element_12;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_tuple_element_13;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_subscript_value_23;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_subscript_value_24;
                PyObject *tmp_expression_value_32;
                PyObject *tmp_subscript_value_25;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[2];
                tmp_expression_value_22 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_expression_value_23 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[27]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);

                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_expression_value_24 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);
                            Py_DECREF(tmp_expression_value_23);

                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_10 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 36;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_10);
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_17);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_24);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_22);
                    Py_DECREF(tmp_expression_value_23);

                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_25;
                    PyObject *tmp_subscript_value_18;
                    PyObject *tmp_expression_value_26;
                    PyObject *tmp_subscript_value_19;
                    PyObject *tmp_tuple_element_11;
                    PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_9);
                    tmp_expression_value_25 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[24]);

                    if (tmp_expression_value_25 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_25 == NULL)) {
                                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_25 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 36;
                                type_description_2 = "c";
                                goto tuple_build_exception_8;
                            }
                            Py_INCREF(tmp_expression_value_25);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_expression_value_26 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                    if (tmp_expression_value_26 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                            if (unlikely(tmp_expression_value_26 == NULL)) {
                                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                            }

                            if (tmp_expression_value_26 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_25);

                                exception_lineno = 36;
                                type_description_2 = "c";
                                goto tuple_build_exception_8;
                            }
                            Py_INCREF(tmp_expression_value_26);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_tuple_element_11 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                    if (tmp_tuple_element_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_11);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_11);
                    tmp_tuple_element_11 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                    if (tmp_tuple_element_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_tuple_element_11 == NULL)) {
                                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_tuple_element_11 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 36;
                                type_description_2 = "c";
                                goto tuple_build_exception_9;
                            }
                            Py_INCREF(tmp_tuple_element_11);
                        } else {
                            goto tuple_build_exception_9;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_19, 1, tmp_tuple_element_11);
                    goto tuple_build_noexception_8;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_9:;
                    Py_DECREF(tmp_expression_value_25);
                    Py_DECREF(tmp_expression_value_26);
                    Py_DECREF(tmp_subscript_value_19);
                    goto tuple_build_exception_8;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_8:;
                    tmp_subscript_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_19);
                    Py_DECREF(tmp_expression_value_26);
                    Py_DECREF(tmp_subscript_value_19);
                    if (tmp_subscript_value_18 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_25);

                        exception_lineno = 36;
                        type_description_2 = "c";
                        goto tuple_build_exception_8;
                    }
                    tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_18);
                    Py_DECREF(tmp_expression_value_25);
                    Py_DECREF(tmp_subscript_value_18);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 36;
                        type_description_2 = "c";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_16);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_subscript_value_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_22);

                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 36;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[3];
                tmp_expression_value_27 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_27 == NULL)) {
                            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_27 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_27);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_12 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_20, 0, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 37;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_20, 1, tmp_tuple_element_12);
                goto tuple_build_noexception_10;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_10:;
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_20);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_10:;
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_27);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 37;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[4];
                tmp_expression_value_28 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_expression_value_29 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_28);

                            exception_lineno = 38;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_13 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 38;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_13);
                goto tuple_build_noexception_11;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_11:;
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_22);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_11:;
                tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_subscript_value_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_28);

                    exception_lineno = 38;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 38;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[5];
                tmp_expression_value_30 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_30 == NULL)) {
                            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 39;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_30);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_23 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_23 == NULL)) {
                            tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_30);

                            exception_lineno = 39;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_subscript_value_23);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_23);
                Py_DECREF(tmp_expression_value_30);
                Py_DECREF(tmp_subscript_value_23);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 39;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[6];
                tmp_expression_value_31 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_31 == NULL)) {
                            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_31 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 40;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_31);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_24 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_24 == NULL)) {
                            tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_24 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_31);

                            exception_lineno = 40;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_subscript_value_24);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_24);
                Py_DECREF(tmp_expression_value_31);
                Py_DECREF(tmp_subscript_value_24);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 40;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[68];
                tmp_dict_value_4 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_dict_value_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_dict_value_4 == NULL)) {
                            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_dict_value_4 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 41;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_dict_value_4);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[69];
                tmp_expression_value_32 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[50]);

                if (tmp_expression_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[50]);

                        if (unlikely(tmp_expression_value_32 == NULL)) {
                            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
                        }

                        if (tmp_expression_value_32 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 42;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_32);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_25 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

                if (tmp_subscript_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_subscript_value_25 == NULL)) {
                            tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                        }

                        if (tmp_subscript_value_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_32);

                            exception_lineno = 42;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_subscript_value_25);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_32);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 42;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_defaults_2);
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_args_element_value_2 = MAKE_FUNCTION_sqlmodel$orm$session$$$function__2_exec(tmp_kw_defaults_2, tmp_annotations_2);

            frame_e56f30e9d0a0078108204a9c82571092_2->m_frame.f_lineno = 31;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_kw_defaults_3;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_27;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_dict_key_5 = mod_consts[2];
            tmp_dict_value_5 = Py_None;
            tmp_kw_defaults_3 = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_expression_value_33;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[3];
                tmp_expression_value_33 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[31]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 54;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[65]);
                Py_DECREF(tmp_expression_value_33);
                if (tmp_dict_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[4];
                tmp_dict_value_5 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[5];
                tmp_dict_value_5 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[6];
                tmp_dict_value_5 = Py_None;
                tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_kw_defaults_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            tmp_dict_key_6 = mod_consts[66];
            tmp_expression_value_34 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[27]);

            if (tmp_expression_value_34 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[27]);

                    if (unlikely(tmp_expression_value_34 == NULL)) {
                        tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                    }

                    if (tmp_expression_value_34 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_3);

                        exception_lineno = 47;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_34);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_35 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[54]);

            if (tmp_expression_value_35 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[54]);

                    if (unlikely(tmp_expression_value_35 == NULL)) {
                        tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
                    }

                    if (tmp_expression_value_35 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_3);
                        Py_DECREF(tmp_expression_value_34);

                        exception_lineno = 48;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_35);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_27 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

            if (tmp_subscript_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_27 == NULL)) {
                        tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_subscript_value_27 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_kw_defaults_3);
                        Py_DECREF(tmp_expression_value_34);
                        Py_DECREF(tmp_expression_value_35);

                        exception_lineno = 48;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_27);
            Py_DECREF(tmp_expression_value_35);
            Py_DECREF(tmp_subscript_value_27);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_3);
                Py_DECREF(tmp_expression_value_34);

                exception_lineno = 48;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_28;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_29;
                PyTuple_SET_ITEM(tmp_subscript_value_26, 0, tmp_tuple_element_14);
                tmp_expression_value_36 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[7]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[7]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 49;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                tmp_subscript_value_28 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

                if (tmp_subscript_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_subscript_value_28 == NULL)) {
                            tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                        }

                        if (tmp_subscript_value_28 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_36);

                            exception_lineno = 49;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_subscript_value_28);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_28);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_28);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_26, 1, tmp_tuple_element_14);
                tmp_expression_value_37 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[41]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[41]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 50;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                tmp_subscript_value_29 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

                if (tmp_subscript_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_subscript_value_29 == NULL)) {
                            tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                        }

                        if (tmp_subscript_value_29 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_37);

                            exception_lineno = 50;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_subscript_value_29);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                tmp_tuple_element_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_29);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_29);
                if (tmp_tuple_element_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_subscript_value_26, 2, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_kw_defaults_3);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_26);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_26);
            Py_DECREF(tmp_expression_value_34);
            Py_DECREF(tmp_subscript_value_26);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_kw_defaults_3);

                exception_lineno = 48;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_30;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_31;
                PyObject *tmp_tuple_element_15;
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_32;
                PyObject *tmp_tuple_element_16;
                PyObject *tmp_expression_value_43;
                PyObject *tmp_subscript_value_35;
                PyObject *tmp_tuple_element_18;
                PyObject *tmp_expression_value_44;
                PyObject *tmp_subscript_value_36;
                PyObject *tmp_expression_value_45;
                PyObject *tmp_subscript_value_37;
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_expression_value_46;
                PyObject *tmp_subscript_value_38;
                PyObject *tmp_expression_value_47;
                PyObject *tmp_subscript_value_39;
                PyObject *tmp_expression_value_48;
                PyObject *tmp_subscript_value_40;
                PyObject *tmp_tuple_element_20;
                PyObject *tmp_expression_value_49;
                PyObject *tmp_subscript_value_41;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[2];
                tmp_expression_value_38 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 53;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_39 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[27]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_38);

                            exception_lineno = 53;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_40 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_38);
                            Py_DECREF(tmp_expression_value_39);

                            exception_lineno = 53;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_16 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_32 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_32, 0, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 53;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_32, 1, tmp_tuple_element_16);
                goto tuple_build_noexception_13;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_13:;
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_32);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_13:;
                tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_32);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_32);
                if (tmp_tuple_element_15 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_38);
                    Py_DECREF(tmp_expression_value_39);

                    exception_lineno = 53;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_31 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_41;
                    PyObject *tmp_subscript_value_33;
                    PyObject *tmp_expression_value_42;
                    PyObject *tmp_subscript_value_34;
                    PyObject *tmp_tuple_element_17;
                    PyTuple_SET_ITEM(tmp_subscript_value_31, 0, tmp_tuple_element_15);
                    tmp_expression_value_41 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[24]);

                    if (tmp_expression_value_41 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_41 == NULL)) {
                                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_41 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 53;
                                type_description_2 = "c";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_expression_value_41);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_expression_value_42 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                    if (tmp_expression_value_42 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                            if (unlikely(tmp_expression_value_42 == NULL)) {
                                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                            }

                            if (tmp_expression_value_42 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_41);

                                exception_lineno = 53;
                                type_description_2 = "c";
                                goto tuple_build_exception_14;
                            }
                            Py_INCREF(tmp_expression_value_42);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_tuple_element_17 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                    if (tmp_tuple_element_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_17 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_17);
                        } else {
                            goto tuple_build_exception_14;
                        }
                    }

                    tmp_subscript_value_34 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_34, 0, tmp_tuple_element_17);
                    tmp_tuple_element_17 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                    if (tmp_tuple_element_17 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_tuple_element_17 == NULL)) {
                                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_tuple_element_17 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 53;
                                type_description_2 = "c";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_tuple_element_17);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_34, 1, tmp_tuple_element_17);
                    goto tuple_build_noexception_14;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_15:;
                    Py_DECREF(tmp_expression_value_41);
                    Py_DECREF(tmp_expression_value_42);
                    Py_DECREF(tmp_subscript_value_34);
                    goto tuple_build_exception_14;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_14:;
                    tmp_subscript_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_34);
                    Py_DECREF(tmp_expression_value_42);
                    Py_DECREF(tmp_subscript_value_34);
                    if (tmp_subscript_value_33 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_41);

                        exception_lineno = 53;
                        type_description_2 = "c";
                        goto tuple_build_exception_14;
                    }
                    tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_33);
                    Py_DECREF(tmp_expression_value_41);
                    Py_DECREF(tmp_subscript_value_33);
                    if (tmp_tuple_element_15 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 53;
                        type_description_2 = "c";
                        goto tuple_build_exception_14;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_31, 1, tmp_tuple_element_15);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_14:;
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_31);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_subscript_value_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_31);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_31);
                if (tmp_subscript_value_30 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_38);

                    exception_lineno = 53;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_30);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_30);
                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 53;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[3];
                tmp_expression_value_43 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_43 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_43 == NULL)) {
                            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_43 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 54;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_43);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_18 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_35 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_35, 0, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 54;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_35, 1, tmp_tuple_element_18);
                goto tuple_build_noexception_16;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_16:;
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_35);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_16:;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_35);
                Py_DECREF(tmp_expression_value_43);
                Py_DECREF(tmp_subscript_value_35);
                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[4];
                tmp_expression_value_44 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_44 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_44 == NULL)) {
                            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_44 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 55;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_44);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_45 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_45 == NULL)) {
                            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_45 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_44);

                            exception_lineno = 55;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_45);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_19 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_19 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_37 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_37, 0, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 55;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_37, 1, tmp_tuple_element_19);
                goto tuple_build_noexception_17;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_17:;
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_37);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_17:;
                tmp_subscript_value_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_37);
                Py_DECREF(tmp_expression_value_45);
                Py_DECREF(tmp_subscript_value_37);
                if (tmp_subscript_value_36 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_44);

                    exception_lineno = 55;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_36);
                Py_DECREF(tmp_expression_value_44);
                Py_DECREF(tmp_subscript_value_36);
                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 55;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[5];
                tmp_expression_value_46 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_46 == NULL)) {
                            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_46 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 56;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_46);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_38 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_38 == NULL)) {
                            tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_38 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_46);

                            exception_lineno = 56;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_subscript_value_38);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_38);
                Py_DECREF(tmp_expression_value_46);
                Py_DECREF(tmp_subscript_value_38);
                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 56;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[6];
                tmp_expression_value_47 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_47 == NULL)) {
                            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_47 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 57;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_47);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_39 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_39 == NULL)) {
                            tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_39 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_47);

                            exception_lineno = 57;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_subscript_value_39);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_39);
                Py_DECREF(tmp_expression_value_47);
                Py_DECREF(tmp_subscript_value_39);
                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 57;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[68];
                tmp_dict_value_6 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_dict_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_dict_value_6 == NULL)) {
                            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_dict_value_6 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 58;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_dict_value_6);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[69];
                tmp_expression_value_48 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[27]);

                if (tmp_expression_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_expression_value_48 == NULL)) {
                            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_expression_value_48 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 59;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_48);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_expression_value_49 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[49]);

                if (tmp_expression_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[49]);

                        if (unlikely(tmp_expression_value_49 == NULL)) {
                            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                        }

                        if (tmp_expression_value_49 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_48);

                            exception_lineno = 59;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_49);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_41 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

                if (tmp_subscript_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_subscript_value_41 == NULL)) {
                            tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                        }

                        if (tmp_subscript_value_41 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_48);
                            Py_DECREF(tmp_expression_value_49);

                            exception_lineno = 59;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_subscript_value_41);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_41);
                Py_DECREF(tmp_expression_value_49);
                Py_DECREF(tmp_subscript_value_41);
                if (tmp_tuple_element_20 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_48);

                    exception_lineno = 59;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_subscript_value_40 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_50;
                    PyObject *tmp_subscript_value_42;
                    PyTuple_SET_ITEM(tmp_subscript_value_40, 0, tmp_tuple_element_20);
                    tmp_expression_value_50 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[50]);

                    if (tmp_expression_value_50 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[50]);

                            if (unlikely(tmp_expression_value_50 == NULL)) {
                                tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
                            }

                            if (tmp_expression_value_50 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 59;
                                type_description_2 = "c";
                                goto tuple_build_exception_18;
                            }
                            Py_INCREF(tmp_expression_value_50);
                        } else {
                            goto tuple_build_exception_18;
                        }
                    }

                    tmp_subscript_value_42 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

                    if (tmp_subscript_value_42 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_subscript_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                            if (unlikely(tmp_subscript_value_42 == NULL)) {
                                tmp_subscript_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                            }

                            if (tmp_subscript_value_42 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_50);

                                exception_lineno = 59;
                                type_description_2 = "c";
                                goto tuple_build_exception_18;
                            }
                            Py_INCREF(tmp_subscript_value_42);
                        } else {
                            goto tuple_build_exception_18;
                        }
                    }

                    tmp_tuple_element_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_42);
                    Py_DECREF(tmp_expression_value_50);
                    Py_DECREF(tmp_subscript_value_42);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 59;
                        type_description_2 = "c";
                        goto tuple_build_exception_18;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_40, 1, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_18;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_18:;
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_subscript_value_40);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_18:;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_40);
                Py_DECREF(tmp_expression_value_48);
                Py_DECREF(tmp_subscript_value_40);
                if (tmp_dict_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 59;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_kw_defaults_3);
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlmodel$orm$session$$$function__3_exec(tmp_kw_defaults_3, tmp_annotations_3, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[70], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_tuple_element_21 = Py_None;
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_51;
                PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_21);
                tmp_expression_value_51 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[31]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "c";
                            goto tuple_build_exception_19;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto tuple_build_exception_19;
                    }
                }

                tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[65]);
                Py_DECREF(tmp_expression_value_51);
                if (tmp_tuple_element_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "c";
                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_21);
                tmp_tuple_element_21 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_21);
                tmp_tuple_element_21 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 3, tmp_tuple_element_21);
                tmp_tuple_element_21 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 4, tmp_tuple_element_21);
            }
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_dict_key_7 = mod_consts[66];
            tmp_dict_value_7 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[42]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[42]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);

                        exception_lineno = 75;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_52;
                PyObject *tmp_subscript_value_43;
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_44;
                PyObject *tmp_tuple_element_22;
                PyObject *tmp_expression_value_54;
                PyObject *tmp_subscript_value_45;
                PyObject *tmp_tuple_element_23;
                PyObject *tmp_expression_value_57;
                PyObject *tmp_subscript_value_48;
                PyObject *tmp_expression_value_58;
                PyObject *tmp_subscript_value_49;
                PyObject *tmp_tuple_element_25;
                PyObject *tmp_expression_value_59;
                PyObject *tmp_subscript_value_50;
                PyObject *tmp_expression_value_60;
                PyObject *tmp_subscript_value_51;
                PyObject *tmp_tuple_element_26;
                PyObject *tmp_expression_value_61;
                PyObject *tmp_subscript_value_52;
                PyObject *tmp_expression_value_62;
                PyObject *tmp_subscript_value_53;
                PyObject *tmp_expression_value_63;
                PyObject *tmp_subscript_value_54;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[2];
                tmp_expression_value_52 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_52 == NULL)) {
                            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_52);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_53 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[27]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_52);

                            exception_lineno = 76;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_54 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_54 == NULL)) {
                            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_52);
                            Py_DECREF(tmp_expression_value_53);

                            exception_lineno = 76;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_54);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_tuple_element_23 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_23 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_23);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_45 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_45, 0, tmp_tuple_element_23);
                tmp_tuple_element_23 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_23 == NULL)) {
                            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_23 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 76;
                            type_description_2 = "c";
                            goto tuple_build_exception_20;
                        }
                        Py_INCREF(tmp_tuple_element_23);
                    } else {
                        goto tuple_build_exception_20;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_45, 1, tmp_tuple_element_23);
                goto tuple_build_noexception_20;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_20:;
                Py_DECREF(tmp_expression_value_52);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_expression_value_54);
                Py_DECREF(tmp_subscript_value_45);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_20:;
                tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_45);
                Py_DECREF(tmp_expression_value_54);
                Py_DECREF(tmp_subscript_value_45);
                if (tmp_tuple_element_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_52);
                    Py_DECREF(tmp_expression_value_53);

                    exception_lineno = 76;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_subscript_value_44 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_55;
                    PyObject *tmp_subscript_value_46;
                    PyObject *tmp_expression_value_56;
                    PyObject *tmp_subscript_value_47;
                    PyObject *tmp_tuple_element_24;
                    PyTuple_SET_ITEM(tmp_subscript_value_44, 0, tmp_tuple_element_22);
                    tmp_expression_value_55 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[24]);

                    if (tmp_expression_value_55 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[24]);

                            if (unlikely(tmp_expression_value_55 == NULL)) {
                                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                            }

                            if (tmp_expression_value_55 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 76;
                                type_description_2 = "c";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_expression_value_55);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_expression_value_56 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                    if (tmp_expression_value_56 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                            if (unlikely(tmp_expression_value_56 == NULL)) {
                                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                            }

                            if (tmp_expression_value_56 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_55);

                                exception_lineno = 76;
                                type_description_2 = "c";
                                goto tuple_build_exception_21;
                            }
                            Py_INCREF(tmp_expression_value_56);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_tuple_element_24 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                    if (tmp_tuple_element_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_24 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_24);
                        } else {
                            goto tuple_build_exception_21;
                        }
                    }

                    tmp_subscript_value_47 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_47, 0, tmp_tuple_element_24);
                    tmp_tuple_element_24 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                    if (tmp_tuple_element_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_tuple_element_24 == NULL)) {
                                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_tuple_element_24 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 76;
                                type_description_2 = "c";
                                goto tuple_build_exception_22;
                            }
                            Py_INCREF(tmp_tuple_element_24);
                        } else {
                            goto tuple_build_exception_22;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_47, 1, tmp_tuple_element_24);
                    goto tuple_build_noexception_21;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_22:;
                    Py_DECREF(tmp_expression_value_55);
                    Py_DECREF(tmp_expression_value_56);
                    Py_DECREF(tmp_subscript_value_47);
                    goto tuple_build_exception_21;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_21:;
                    tmp_subscript_value_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_47);
                    Py_DECREF(tmp_expression_value_56);
                    Py_DECREF(tmp_subscript_value_47);
                    if (tmp_subscript_value_46 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_55);

                        exception_lineno = 76;
                        type_description_2 = "c";
                        goto tuple_build_exception_21;
                    }
                    tmp_tuple_element_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_46);
                    Py_DECREF(tmp_expression_value_55);
                    Py_DECREF(tmp_subscript_value_46);
                    if (tmp_tuple_element_22 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 76;
                        type_description_2 = "c";
                        goto tuple_build_exception_21;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_44, 1, tmp_tuple_element_22);
                }
                goto tuple_build_noexception_22;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_21:;
                Py_DECREF(tmp_expression_value_52);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_44);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_22:;
                tmp_subscript_value_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_44);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_44);
                if (tmp_subscript_value_43 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_52);

                    exception_lineno = 76;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_43);
                Py_DECREF(tmp_expression_value_52);
                Py_DECREF(tmp_subscript_value_43);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 76;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[3];
                tmp_expression_value_57 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_57 == NULL)) {
                            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_57 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_57);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_58 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_58 == NULL)) {
                            tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_58 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_57);

                            exception_lineno = 77;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_58);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_tuple_element_25 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_25 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_25);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_49 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_49, 0, tmp_tuple_element_25);
                tmp_tuple_element_25 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_25 == NULL)) {
                            tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_25 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 77;
                            type_description_2 = "c";
                            goto tuple_build_exception_23;
                        }
                        Py_INCREF(tmp_tuple_element_25);
                    } else {
                        goto tuple_build_exception_23;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_49, 1, tmp_tuple_element_25);
                goto tuple_build_noexception_23;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_23:;
                Py_DECREF(tmp_expression_value_57);
                Py_DECREF(tmp_expression_value_58);
                Py_DECREF(tmp_subscript_value_49);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_23:;
                tmp_subscript_value_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_49);
                Py_DECREF(tmp_expression_value_58);
                Py_DECREF(tmp_subscript_value_49);
                if (tmp_subscript_value_48 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_57);

                    exception_lineno = 77;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_48);
                Py_DECREF(tmp_expression_value_57);
                Py_DECREF(tmp_subscript_value_48);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 77;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[4];
                tmp_expression_value_59 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_59 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_59 == NULL)) {
                            tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_59 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_59);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_expression_value_60 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_60 == NULL)) {
                            tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_60 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_59);

                            exception_lineno = 78;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_60);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_tuple_element_26 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_51 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_51, 0, tmp_tuple_element_26);
                tmp_tuple_element_26 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_26 == NULL)) {
                            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_26 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 78;
                            type_description_2 = "c";
                            goto tuple_build_exception_24;
                        }
                        Py_INCREF(tmp_tuple_element_26);
                    } else {
                        goto tuple_build_exception_24;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_51, 1, tmp_tuple_element_26);
                goto tuple_build_noexception_24;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_24:;
                Py_DECREF(tmp_expression_value_59);
                Py_DECREF(tmp_expression_value_60);
                Py_DECREF(tmp_subscript_value_51);
                goto dict_build_exception_7;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_24:;
                tmp_subscript_value_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_51);
                Py_DECREF(tmp_expression_value_60);
                Py_DECREF(tmp_subscript_value_51);
                if (tmp_subscript_value_50 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_59);

                    exception_lineno = 78;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_50);
                Py_DECREF(tmp_expression_value_59);
                Py_DECREF(tmp_subscript_value_50);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 78;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[5];
                tmp_expression_value_61 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_61 == NULL)) {
                            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_61 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 79;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_61);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_52 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_52 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_52 == NULL)) {
                            tmp_subscript_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_52 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_61);

                            exception_lineno = 79;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_subscript_value_52);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_52);
                Py_DECREF(tmp_expression_value_61);
                Py_DECREF(tmp_subscript_value_52);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 79;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[6];
                tmp_expression_value_62 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_62 == NULL)) {
                            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 80;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_62);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_53 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_53 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_53 == NULL)) {
                            tmp_subscript_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_53 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_62);

                            exception_lineno = 80;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_subscript_value_53);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_53);
                Py_DECREF(tmp_expression_value_62);
                Py_DECREF(tmp_subscript_value_53);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 80;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[68];
                tmp_dict_value_7 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_dict_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_dict_value_7 == NULL)) {
                            tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_dict_value_7 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 81;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_dict_value_7);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
                tmp_dict_key_7 = mod_consts[69];
                tmp_expression_value_63 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[49]);

                if (tmp_expression_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[49]);

                        if (unlikely(tmp_expression_value_63 == NULL)) {
                            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
                        }

                        if (tmp_expression_value_63 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 82;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_63);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_subscript_value_54 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_54 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_54 == NULL)) {
                            tmp_subscript_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_54 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_63);

                            exception_lineno = 82;
                            type_description_2 = "c";
                            goto dict_build_exception_7;
                        }
                        Py_INCREF(tmp_subscript_value_54);
                    } else {
                        goto dict_build_exception_7;
                    }
                }

                tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_54);
                Py_DECREF(tmp_expression_value_63);
                Py_DECREF(tmp_subscript_value_54);
                if (tmp_dict_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 82;
                    type_description_2 = "c";
                    goto dict_build_exception_7;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_7, tmp_dict_value_7);
                Py_DECREF(tmp_dict_value_7);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;

            tmp_closure_2[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlmodel$orm$session$$$function__4_execute(tmp_defaults_1, tmp_annotations_4, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_dict_key_8 = mod_consts[73];
            tmp_dict_value_8 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 111;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[74];
            tmp_dict_value_8 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 111;
                        type_description_2 = "c";
                        goto dict_build_exception_8;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto dict_build_exception_8;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[69];
            tmp_dict_value_8 = mod_consts[75];
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;

            tmp_closure_3[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlmodel$orm$session$$$function__5_query(tmp_annotations_5, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_subscript_value_55;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_tuple_element_27 = Py_None;
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_64;
                PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_27);
                tmp_tuple_element_27 = Py_False;
                PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_27);
                tmp_tuple_element_27 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_27);
                tmp_tuple_element_27 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_27);
                tmp_expression_value_64 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[31]);

                if (tmp_expression_value_64 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[31]);

                        if (unlikely(tmp_expression_value_64 == NULL)) {
                            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
                        }

                        if (tmp_expression_value_64 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "c";
                            goto tuple_build_exception_25;
                        }
                        Py_INCREF(tmp_expression_value_64);
                    } else {
                        goto tuple_build_exception_25;
                    }
                }

                tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[65]);
                Py_DECREF(tmp_expression_value_64);
                if (tmp_tuple_element_27 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;
                    type_description_2 = "c";
                    goto tuple_build_exception_25;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 4, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_defaults_2);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_dict_key_9 = mod_consts[77];
            tmp_expression_value_65 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[25]);

            if (tmp_expression_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[25]);

                    if (unlikely(tmp_expression_value_65 == NULL)) {
                        tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
                    }

                    if (tmp_expression_value_65 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_2);

                        exception_lineno = 125;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_65);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_55 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

            if (tmp_subscript_value_55 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_subscript_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_subscript_value_55 == NULL)) {
                        tmp_subscript_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                    }

                    if (tmp_subscript_value_55 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_2);
                        Py_DECREF(tmp_expression_value_65);

                        exception_lineno = 125;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_subscript_value_55);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_55);
            Py_DECREF(tmp_expression_value_65);
            Py_DECREF(tmp_subscript_value_55);
            if (tmp_dict_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_2);

                exception_lineno = 125;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_66;
                PyObject *tmp_subscript_value_56;
                PyObject *tmp_expression_value_67;
                PyObject *tmp_subscript_value_57;
                PyObject *tmp_expression_value_68;
                PyObject *tmp_subscript_value_58;
                PyObject *tmp_expression_value_69;
                PyObject *tmp_subscript_value_59;
                PyObject *tmp_tuple_element_28;
                PyObject *tmp_expression_value_70;
                PyObject *tmp_subscript_value_60;
                PyObject *tmp_expression_value_72;
                PyObject *tmp_subscript_value_62;
                PyObject *tmp_expression_value_73;
                PyObject *tmp_subscript_value_63;
                PyObject *tmp_expression_value_74;
                PyObject *tmp_subscript_value_64;
                PyObject *tmp_tuple_element_30;
                PyObject *tmp_expression_value_75;
                PyObject *tmp_subscript_value_65;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[78];
                tmp_dict_value_9 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_dict_value_9 == NULL)) {
                            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_dict_value_9 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 126;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[79];
                tmp_expression_value_66 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_66 == NULL)) {
                            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_66 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 127;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_66);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_67 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[24]);

                if (tmp_expression_value_67 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[24]);

                        if (unlikely(tmp_expression_value_67 == NULL)) {
                            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
                        }

                        if (tmp_expression_value_67 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_66);

                            exception_lineno = 127;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_67);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_57 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_57 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_57 == NULL)) {
                            tmp_subscript_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_57 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_66);
                            Py_DECREF(tmp_expression_value_67);

                            exception_lineno = 127;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_subscript_value_57);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_57);
                Py_DECREF(tmp_expression_value_67);
                Py_DECREF(tmp_subscript_value_57);
                if (tmp_subscript_value_56 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_66);

                    exception_lineno = 127;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_56);
                Py_DECREF(tmp_expression_value_66);
                Py_DECREF(tmp_subscript_value_56);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 127;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[80];
                tmp_dict_value_9 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[81]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_dict_value_9 = (PyObject *)&PyBool_Type;
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[82];
                tmp_expression_value_68 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_68 == NULL)) {
                            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_68 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 129;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_68);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_69 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[27]);

                if (tmp_expression_value_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[27]);

                        if (unlikely(tmp_expression_value_69 == NULL)) {
                            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
                        }

                        if (tmp_expression_value_69 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_68);

                            exception_lineno = 129;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_69);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_70 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[45]);

                if (tmp_expression_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_expression_value_70 == NULL)) {
                            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
                        }

                        if (tmp_expression_value_70 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_68);
                            Py_DECREF(tmp_expression_value_69);

                            exception_lineno = 129;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_70);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_60 = Py_True;
                tmp_tuple_element_28 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_70, tmp_subscript_value_60, 1);
                Py_DECREF(tmp_expression_value_70);
                if (tmp_tuple_element_28 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_68);
                    Py_DECREF(tmp_expression_value_69);

                    exception_lineno = 129;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_subscript_value_59 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_71;
                    PyObject *tmp_subscript_value_61;
                    PyObject *tmp_tuple_element_29;
                    PyTuple_SET_ITEM(tmp_subscript_value_59, 0, tmp_tuple_element_28);
                    tmp_expression_value_71 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                    if (tmp_expression_value_71 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                            if (unlikely(tmp_expression_value_71 == NULL)) {
                                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                            }

                            if (tmp_expression_value_71 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 129;
                                type_description_2 = "c";
                                goto tuple_build_exception_26;
                            }
                            Py_INCREF(tmp_expression_value_71);
                        } else {
                            goto tuple_build_exception_26;
                        }
                    }

                    tmp_tuple_element_29 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[67]);

                    if (tmp_tuple_element_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_29 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_29);
                        } else {
                            goto tuple_build_exception_26;
                        }
                    }

                    tmp_subscript_value_61 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_61, 0, tmp_tuple_element_29);
                    tmp_tuple_element_29 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                    if (tmp_tuple_element_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                            if (unlikely(tmp_tuple_element_29 == NULL)) {
                                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                            }

                            if (tmp_tuple_element_29 == NULL) {
                                assert(HAS_ERROR_OCCURRED(tstate));

                                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                                exception_lineno = 129;
                                type_description_2 = "c";
                                goto tuple_build_exception_27;
                            }
                            Py_INCREF(tmp_tuple_element_29);
                        } else {
                            goto tuple_build_exception_27;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_61, 1, tmp_tuple_element_29);
                    goto tuple_build_noexception_26;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_27:;
                    Py_DECREF(tmp_expression_value_71);
                    Py_DECREF(tmp_subscript_value_61);
                    goto tuple_build_exception_26;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_26:;
                    tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_61);
                    Py_DECREF(tmp_expression_value_71);
                    Py_DECREF(tmp_subscript_value_61);
                    if (tmp_tuple_element_28 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                        exception_lineno = 129;
                        type_description_2 = "c";
                        goto tuple_build_exception_26;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_59, 1, tmp_tuple_element_28);
                }
                goto tuple_build_noexception_27;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_26:;
                Py_DECREF(tmp_expression_value_68);
                Py_DECREF(tmp_expression_value_69);
                Py_DECREF(tmp_subscript_value_59);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_27:;
                tmp_subscript_value_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_59);
                Py_DECREF(tmp_expression_value_69);
                Py_DECREF(tmp_subscript_value_59);
                if (tmp_subscript_value_58 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_68);

                    exception_lineno = 129;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_58);
                Py_DECREF(tmp_expression_value_68);
                Py_DECREF(tmp_subscript_value_58);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 129;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[83];
                tmp_expression_value_72 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_72 == NULL)) {
                            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_72 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 130;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_72);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_62 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_subscript_value_62 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_62 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_subscript_value_62 == NULL)) {
                            tmp_subscript_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_subscript_value_62 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_72);

                            exception_lineno = 130;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_subscript_value_62);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_62);
                Py_DECREF(tmp_expression_value_72);
                Py_DECREF(tmp_subscript_value_62);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 130;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[3];
                tmp_expression_value_73 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_73 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_73 == NULL)) {
                            tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_73 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_73);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_expression_value_74 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[22]);

                if (tmp_expression_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[22]);

                        if (unlikely(tmp_expression_value_74 == NULL)) {
                            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
                        }

                        if (tmp_expression_value_74 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_73);

                            exception_lineno = 131;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_74);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_tuple_element_30 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_73);
                            Py_DECREF(tmp_expression_value_74);

                            exception_lineno = 131;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_64 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM(tmp_subscript_value_64, 0, tmp_tuple_element_30);
                tmp_tuple_element_30 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[20]);

                if (tmp_tuple_element_30 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[20]);

                        if (unlikely(tmp_tuple_element_30 == NULL)) {
                            tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
                        }

                        if (tmp_tuple_element_30 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 131;
                            type_description_2 = "c";
                            goto tuple_build_exception_28;
                        }
                        Py_INCREF(tmp_tuple_element_30);
                    } else {
                        goto tuple_build_exception_28;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_64, 1, tmp_tuple_element_30);
                goto tuple_build_noexception_28;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_28:;
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_expression_value_74);
                Py_DECREF(tmp_subscript_value_64);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_28:;
                tmp_subscript_value_63 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_64);
                Py_DECREF(tmp_expression_value_74);
                Py_DECREF(tmp_subscript_value_64);
                if (tmp_subscript_value_63 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_73);

                    exception_lineno = 131;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_63);
                Py_DECREF(tmp_expression_value_73);
                Py_DECREF(tmp_subscript_value_63);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 131;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[69];
                tmp_expression_value_75 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[23]);

                if (tmp_expression_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[23]);

                        if (unlikely(tmp_expression_value_75 == NULL)) {
                            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
                        }

                        if (tmp_expression_value_75 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                            exception_lineno = 132;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_75);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_65 = PyObject_GetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[56]);

                if (tmp_subscript_value_65 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                        tmp_subscript_value_65 = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[56]);

                        if (unlikely(tmp_subscript_value_65 == NULL)) {
                            tmp_subscript_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
                        }

                        if (tmp_subscript_value_65 == NULL) {
                            assert(HAS_ERROR_OCCURRED(tstate));

                            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_75);

                            exception_lineno = 132;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_subscript_value_65);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_65);
                Py_DECREF(tmp_expression_value_75);
                Py_DECREF(tmp_subscript_value_65);
                if (tmp_dict_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 132;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_defaults_2);
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;

            tmp_closure_4[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_dictset_value = MAKE_FUNCTION_sqlmodel$orm$session$$$function__6_get(tmp_defaults_2, tmp_annotations_6, tmp_closure_4);

            tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_e56f30e9d0a0078108204a9c82571092_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_e56f30e9d0a0078108204a9c82571092_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_e56f30e9d0a0078108204a9c82571092_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_e56f30e9d0a0078108204a9c82571092_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_e56f30e9d0a0078108204a9c82571092_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_sqlmodel$orm$session$$$class__1_Session_16, mod_consts[85], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_5 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_31 = mod_consts[37];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_31 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = locals_sqlmodel$orm$session$$$class__1_Session_16;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_31);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame.f_lineno = 16;
            tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 16;

                goto try_except_handler_6;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_33);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_32 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_sqlmodel$orm$session$$$class__1_Session_16);
        locals_sqlmodel$orm$session$$$class__1_Session_16 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_sqlmodel$orm$session$$$class__1_Session_16);
        locals_sqlmodel$orm$session$$$class__1_Session_16 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 16;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_32);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_66cf1be3e7f2540f122a98a32acf8b13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_66cf1be3e7f2540f122a98a32acf8b13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_66cf1be3e7f2540f122a98a32acf8b13, exception_lineno);
    }



    assertFrameObject(frame_66cf1be3e7f2540f122a98a32acf8b13);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlmodel.orm.session", false);

    Py_INCREF(module_sqlmodel$orm$session);
    return module_sqlmodel$orm$session;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlmodel$orm$session, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlmodel$orm$session", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
