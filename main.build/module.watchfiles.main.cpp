/* Generated code for Python module 'watchfiles.main'
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

/* The "module_watchfiles$main" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_watchfiles$main;
PyDictObject *moduledict_watchfiles$main;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[151];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[151];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("watchfiles.main"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 151; i++) {
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
void checkModuleConstants_watchfiles$main(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 151; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_1d4fe37fa9d63b0edf051df5ee828c43;
static PyCodeObject *codeobj_62175c82aa79c502f43d76d224029150;
static PyCodeObject *codeobj_5e469396e1f1de3a0854ac04de314903;
static PyCodeObject *codeobj_3856162b5327cbee7f1361b31fb6af58;
static PyCodeObject *codeobj_7310272afde0ab15cab485b04ce2e72b;
static PyCodeObject *codeobj_288ab09f877f7aba732234eb4dedbaa6;
static PyCodeObject *codeobj_bd4c033cf2f5bdc727117ad49f59e15b;
static PyCodeObject *codeobj_f6bb0b29486e2355861b46087e78d6ee;
static PyCodeObject *codeobj_a73ecb8e35efae1debef157938d46491;
static PyCodeObject *codeobj_4f8e242b131ae31a81a17beeeaf81577;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[140]); CHECK_OBJECT(module_filename_obj);
    codeobj_1d4fe37fa9d63b0edf051df5ee828c43 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[141], mod_consts[141], NULL, NULL, 0, 0, 0);
    codeobj_62175c82aa79c502f43d76d224029150 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[142], NULL, 0, 0, 0);
    codeobj_5e469396e1f1de3a0854ac04de314903 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[143], NULL, 0, 0, 0);
    codeobj_3856162b5327cbee7f1361b31fb6af58 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[144], NULL, 1, 0, 0);
    codeobj_7310272afde0ab15cab485b04ce2e72b = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[145], NULL, 1, 0, 0);
    codeobj_288ab09f877f7aba732234eb4dedbaa6 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[146], NULL, 1, 0, 0);
    codeobj_bd4c033cf2f5bdc727117ad49f59e15b = MAKE_CODE_OBJECT(module_filename_obj, 264, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[147], NULL, 2, 0, 0);
    codeobj_f6bb0b29486e2355861b46087e78d6ee = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_ASYNC_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[148], NULL, 0, 11, 0);
    codeobj_a73ecb8e35efae1debef157938d46491 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[126], mod_consts[126], mod_consts[149], NULL, 1, 0, 0);
    codeobj_4f8e242b131ae31a81a17beeeaf81577 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE, mod_consts[12], mod_consts[12], mod_consts[150], NULL, 0, 11, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_watchfiles$main$$$function__3_watch$$$genobj__1_watch(struct Nuitka_CellObject **closure);


static PyObject *MAKE_ASYNCGEN_watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__1_raw_str(PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__3_watch(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__4_awatch(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__5__prep_changes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__6__log_changes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__7__calc_async_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__8__default_force_polling(PyObject *annotations);


static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__9__auto_force_polling(PyObject *annotations);


// The module function definitions.
static PyObject *impl_watchfiles$main$$$function__1_raw_str(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a73ecb8e35efae1debef157938d46491;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a73ecb8e35efae1debef157938d46491 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a73ecb8e35efae1debef157938d46491)) {
        Py_XDECREF(cache_frame_a73ecb8e35efae1debef157938d46491);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a73ecb8e35efae1debef157938d46491 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a73ecb8e35efae1debef157938d46491 = MAKE_FUNCTION_FRAME(tstate, codeobj_a73ecb8e35efae1debef157938d46491, module_watchfiles$main, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a73ecb8e35efae1debef157938d46491->m_type_description == NULL);
    frame_a73ecb8e35efae1debef157938d46491 = cache_frame_a73ecb8e35efae1debef157938d46491;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a73ecb8e35efae1debef157938d46491);
    assert(Py_REFCNT(frame_a73ecb8e35efae1debef157938d46491) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_a73ecb8e35efae1debef157938d46491, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a73ecb8e35efae1debef157938d46491->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a73ecb8e35efae1debef157938d46491, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a73ecb8e35efae1debef157938d46491,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a73ecb8e35efae1debef157938d46491 == cache_frame_a73ecb8e35efae1debef157938d46491) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a73ecb8e35efae1debef157938d46491);
        cache_frame_a73ecb8e35efae1debef157938d46491 = NULL;
    }

    assertFrameObject(frame_a73ecb8e35efae1debef157938d46491);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchfiles$main$$$function__3_watch(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_watch_filter = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_debounce = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_step = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_stop_event = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_rust_timeout = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_yield_on_timeout = Nuitka_Cell_New1(python_pars[5]);
    struct Nuitka_CellObject *par_debug = Nuitka_Cell_New1(python_pars[6]);
    struct Nuitka_CellObject *par_raise_interrupt = Nuitka_Cell_New1(python_pars[7]);
    struct Nuitka_CellObject *par_force_polling = Nuitka_Cell_New1(python_pars[8]);
    struct Nuitka_CellObject *par_poll_delay_ms = Nuitka_Cell_New1(python_pars[9]);
    struct Nuitka_CellObject *par_recursive = Nuitka_Cell_New1(python_pars[10]);
    struct Nuitka_CellObject *par_paths = Nuitka_Cell_New1(python_pars[11]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[12];

        tmp_closure_1[0] = par_debounce;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_debug;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_force_polling;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_paths;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_poll_delay_ms;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_raise_interrupt;
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = par_recursive;
        Py_INCREF(tmp_closure_1[6]);
        tmp_closure_1[7] = par_rust_timeout;
        Py_INCREF(tmp_closure_1[7]);
        tmp_closure_1[8] = par_step;
        Py_INCREF(tmp_closure_1[8]);
        tmp_closure_1[9] = par_stop_event;
        Py_INCREF(tmp_closure_1[9]);
        tmp_closure_1[10] = par_watch_filter;
        Py_INCREF(tmp_closure_1[10]);
        tmp_closure_1[11] = par_yield_on_timeout;
        Py_INCREF(tmp_closure_1[11]);

        tmp_return_value = MAKE_GENERATOR_watchfiles$main$$$function__3_watch$$$genobj__1_watch(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_force_polling);
    Py_DECREF(par_force_polling);
    par_force_polling = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_watch_filter);
    Py_DECREF(par_watch_filter);
    CHECK_OBJECT(par_debounce);
    Py_DECREF(par_debounce);
    CHECK_OBJECT(par_step);
    Py_DECREF(par_step);
    CHECK_OBJECT(par_stop_event);
    Py_DECREF(par_stop_event);
    CHECK_OBJECT(par_rust_timeout);
    Py_DECREF(par_rust_timeout);
    CHECK_OBJECT(par_yield_on_timeout);
    Py_DECREF(par_yield_on_timeout);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_raise_interrupt);
    Py_DECREF(par_raise_interrupt);
    CHECK_OBJECT(par_poll_delay_ms);
    Py_DECREF(par_poll_delay_ms);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    CHECK_OBJECT(par_paths);
    Py_DECREF(par_paths);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct watchfiles$main$$$function__3_watch$$$genobj__1_watch_locals {
    PyObject *var_watcher;
    PyObject *var_raw_changes;
    PyObject *var_changes;
    PyObject *outline_0_var_p;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *tmp_return_value;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
};
#endif

static PyObject *watchfiles$main$$$function__3_watch$$$genobj__1_watch_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct watchfiles$main$$$function__3_watch$$$genobj__1_watch_locals *generator_heap = (struct watchfiles$main$$$function__3_watch$$$genobj__1_watch_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_watcher = NULL;
    generator_heap->var_raw_changes = NULL;
    generator_heap->var_changes = NULL;
    generator_heap->outline_0_var_p = NULL;
    generator_heap->tmp_listcomp_1__$0 = NULL;
    generator_heap->tmp_listcomp_1__contraction = NULL;
    generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
    generator_heap->tmp_with_1__enter = NULL;
    generator_heap->tmp_with_1__exit = NULL;
    generator_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    generator_heap->tmp_with_1__source = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_4f8e242b131ae31a81a17beeeaf81577, module_watchfiles$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 113;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[2]);
            PyCell_SET(generator->m_closure[2], tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_iter_arg_1;
            if (Nuitka_Cell_GET(generator->m_closure[3]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 114;
                generator_heap->type_description_1 = "ccccccccccccooo";
                goto try_except_handler_3;
            }

            tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[3]);
            tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 114;
                generator_heap->type_description_1 = "ccccccccccccooo";
                goto try_except_handler_3;
            }
            assert(generator_heap->tmp_listcomp_1__$0 == NULL);
            generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_3;
        }
        {
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
            assert(generator_heap->tmp_listcomp_1__contraction == NULL);
            generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_4;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
            tmp_next_source_1 = generator_heap->tmp_listcomp_1__$0;
            tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_5 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "ccccccccccccooo";
                    generator_heap->exception_lineno = 114;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
                generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
            tmp_assign_source_6 = generator_heap->tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = generator_heap->outline_0_var_p;
                generator_heap->outline_0_var_p = tmp_assign_source_6;
                Py_INCREF(generator_heap->outline_0_var_p);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_unicode_arg_1;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
            CHECK_OBJECT(generator_heap->outline_0_var_p);
            tmp_unicode_arg_1 = generator_heap->outline_0_var_p;
            tmp_append_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 114;
                generator_heap->type_description_1 = "ccccccccccccooo";
                goto try_except_handler_4;
            }
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (generator_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 114;
                generator_heap->type_description_1 = "ccccccccccccooo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        tmp_args_element_value_2 = generator_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_2);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_1;
        generator_heap->exception_value = generator_heap->exception_keeper_value_1;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(generator_heap->outline_0_var_p);
        generator_heap->outline_0_var_p = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_0_var_p);
        generator_heap->outline_0_var_p = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        generator_heap->exception_lineno = 114;
        goto try_except_handler_2;
        outline_result_1:;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[6]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[2]));
        tmp_args_element_value_4 = Nuitka_Cell_GET(generator->m_closure[2]);
        if (Nuitka_Cell_GET(generator->m_closure[4]) == NULL) {
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(generator->m_closure[4]);
        if (Nuitka_Cell_GET(generator->m_closure[6]) == NULL) {
            Py_DECREF(tmp_args_element_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[8]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_6 = Nuitka_Cell_GET(generator->m_closure[6]);
        generator->m_frame->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__source == NULL);
        generator_heap->tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_1 = generator_heap->tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_1, mod_consts[9]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 114;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__enter == NULL);
        generator_heap->tmp_with_1__enter = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(generator_heap->tmp_with_1__source);
        tmp_expression_value_2 = generator_heap->tmp_with_1__source;
        tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[10]);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }
        assert(generator_heap->tmp_with_1__exit == NULL);
        generator_heap->tmp_with_1__exit = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_TRUE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(generator_heap->tmp_with_1__enter);
        tmp_assign_source_10 = generator_heap->tmp_with_1__enter;
        assert(generator_heap->var_watcher == NULL);
        Py_INCREF(tmp_assign_source_10);
        generator_heap->var_watcher = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        if (generator_heap->var_watcher == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[11]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_3 = generator_heap->var_watcher;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[13]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[8]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[14]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_8 = Nuitka_Cell_GET(generator->m_closure[8]);
        if (Nuitka_Cell_GET(generator->m_closure[7]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[15]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_9 = Nuitka_Cell_GET(generator->m_closure[7]);
        if (Nuitka_Cell_GET(generator->m_closure[9]) == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[16]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_10 = Nuitka_Cell_GET(generator->m_closure[9]);
        generator->m_frame->m_frame.f_lineno = 116;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->var_raw_changes;
            generator_heap->var_raw_changes = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_raw_changes);
        tmp_cmp_expr_left_1 = generator_heap->var_raw_changes;
        tmp_cmp_expr_right_1 = mod_consts[17];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 117;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[11]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[18]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 118;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[11]));
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 118;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_value_4;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_4 = PySet_New(NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_4;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 119;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        generator->m_frame->m_frame.f_lineno = 121;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(generator_heap->var_raw_changes);
        tmp_cmp_expr_left_2 = generator_heap->var_raw_changes;
        tmp_cmp_expr_right_2 = mod_consts[21];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 122;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(generator->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 123;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(Nuitka_Cell_GET(generator->m_closure[5]));
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 123;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_KeyboardInterrupt;
        generator_heap->exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        generator_heap->exception_lineno = 124;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "ccccccccccccooo";
        goto try_except_handler_6;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        generator->m_frame->m_frame.f_lineno = 126;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    generator_heap->tmp_return_value = Py_None;
    Py_INCREF(generator_heap->tmp_return_value);
    goto try_return_handler_5;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(generator_heap->var_raw_changes);
        tmp_cmp_expr_left_3 = generator_heap->var_raw_changes;
        tmp_cmp_expr_right_3 = mod_consts[25];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    generator_heap->tmp_return_value = Py_None;
    Py_INCREF(generator_heap->tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(generator_heap->var_raw_changes);
        tmp_args_element_value_11 = generator_heap->var_raw_changes;
        if (Nuitka_Cell_GET(generator->m_closure[10]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[27]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_12 = Nuitka_Cell_GET(generator->m_closure[10]);
        generator->m_frame->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = generator_heap->var_changes;
            generator_heap->var_changes = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        CHECK_OBJECT(generator_heap->var_changes);
        tmp_truth_name_3 = CHECK_IF_TRUE(generator_heap->var_changes);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_13;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(generator_heap->var_changes);
        tmp_args_element_value_13 = generator_heap->var_changes;
        generator->m_frame->m_frame.f_lineno = 133;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_13);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_expression_value_5;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_changes);
        tmp_expression_value_5 = generator_heap->var_changes;
        Py_INCREF(tmp_expression_value_5);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_5;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_6;
        }
        tmp_yield_result_2 = yield_return_value;
        Py_DECREF(tmp_yield_result_2);
    }
    branch_no_6:;
    branch_end_5:;
    branch_end_3:;
    branch_end_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 115;
        generator_heap->type_description_1 = "ccccccccccccooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_3 == NULL) {
        generator_heap->exception_keeper_tb_3 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_3);
    } else if (generator_heap->exception_keeper_lineno_3 != 0) {
        generator_heap->exception_keeper_tb_3 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_3, generator->m_frame, generator_heap->exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_3, &generator_heap->exception_keeper_value_3, &generator_heap->exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_7 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        nuitka_bool tmp_assign_source_13;
        tmp_assign_source_13 = NUITKA_BOOL_FALSE;
        generator_heap->tmp_with_1__indicator = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_7 = generator_heap->tmp_with_1__exit;
        tmp_args_element_value_14 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_15 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_16 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        generator->m_frame->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_7, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_7;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_8 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 114;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccccccccccooo";
    goto try_except_handler_7;
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 114;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "ccccccccccccooo";
    goto try_except_handler_7;
    branch_end_7:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_5:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_8 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 114;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_8, mod_consts[29]);

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_9:;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_5:;
    generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_9 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 114;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_9, mod_consts[29]);

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

            Py_DECREF(generator_heap->exception_keeper_type_5);
            Py_XDECREF(generator_heap->exception_keeper_value_5);
            Py_XDECREF(generator_heap->exception_keeper_tb_5);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_10:;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_5;
    generator_heap->exception_value = generator_heap->exception_keeper_value_5;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_cmp_expr_left_7;
        nuitka_bool tmp_cmp_expr_right_7;
        assert(generator_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_7 = generator_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_cmp_expr_left_7 == tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(generator_heap->tmp_with_1__exit);
        tmp_called_value_10 = generator_heap->tmp_with_1__exit;
        generator->m_frame->m_frame.f_lineno = 114;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_10, mod_consts[29]);

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccccccccccccooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_11:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_6;
    generator_heap->exception_value = generator_heap->exception_keeper_value_6;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[10],
            generator->m_closure[0],
            generator->m_closure[8],
            generator->m_closure[9],
            generator->m_closure[7],
            generator->m_closure[11],
            generator->m_closure[1],
            generator->m_closure[5],
            generator->m_closure[2],
            generator->m_closure[4],
            generator->m_closure[6],
            generator->m_closure[3],
            generator_heap->var_watcher,
            generator_heap->var_raw_changes,
            generator_heap->var_changes
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_5;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(generator_heap->var_watcher);
    generator_heap->var_watcher = NULL;
    CHECK_OBJECT(generator_heap->var_raw_changes);
    Py_DECREF(generator_heap->var_raw_changes);
    generator_heap->var_raw_changes = NULL;
    Py_XDECREF(generator_heap->var_changes);
    generator_heap->var_changes = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_watcher);
    generator_heap->var_watcher = NULL;
    Py_XDECREF(generator_heap->var_raw_changes);
    generator_heap->var_raw_changes = NULL;
    Py_XDECREF(generator_heap->var_changes);
    generator_heap->var_changes = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_7;
    generator_heap->exception_value = generator_heap->exception_keeper_value_7;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(generator_heap->tmp_with_1__source);
    Py_DECREF(generator_heap->tmp_with_1__source);
    generator_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__enter);
    Py_DECREF(generator_heap->tmp_with_1__enter);
    generator_heap->tmp_with_1__enter = NULL;
    CHECK_OBJECT(generator_heap->tmp_with_1__exit);
    Py_DECREF(generator_heap->tmp_with_1__exit);
    generator_heap->tmp_with_1__exit = NULL;
    Py_XDECREF(generator_heap->var_watcher);
    generator_heap->var_watcher = NULL;
    Py_XDECREF(generator_heap->var_raw_changes);
    generator_heap->var_raw_changes = NULL;
    Py_XDECREF(generator_heap->var_changes);
    generator_heap->var_changes = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_watchfiles$main$$$function__3_watch$$$genobj__1_watch(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        watchfiles$main$$$function__3_watch$$$genobj__1_watch_context,
        module_watchfiles$main,
        mod_consts[12],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_4f8e242b131ae31a81a17beeeaf81577,
        closure,
        12,
#if 1
        sizeof(struct watchfiles$main$$$function__3_watch$$$genobj__1_watch_locals)
#else
        0
#endif
    );
}


static PyObject *impl_watchfiles$main$$$function__4_awatch(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_watch_filter = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_debounce = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_step = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_stop_event = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_rust_timeout = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_yield_on_timeout = Nuitka_Cell_New1(python_pars[5]);
    struct Nuitka_CellObject *par_debug = Nuitka_Cell_New1(python_pars[6]);
    struct Nuitka_CellObject *par_raise_interrupt = Nuitka_Cell_New1(python_pars[7]);
    struct Nuitka_CellObject *par_force_polling = Nuitka_Cell_New1(python_pars[8]);
    struct Nuitka_CellObject *par_poll_delay_ms = Nuitka_Cell_New1(python_pars[9]);
    struct Nuitka_CellObject *par_recursive = Nuitka_Cell_New1(python_pars[10]);
    struct Nuitka_CellObject *par_paths = Nuitka_Cell_New1(python_pars[11]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[12];

        tmp_closure_1[0] = par_debounce;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_debug;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_force_polling;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_paths;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_poll_delay_ms;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_raise_interrupt;
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = par_recursive;
        Py_INCREF(tmp_closure_1[6]);
        tmp_closure_1[7] = par_rust_timeout;
        Py_INCREF(tmp_closure_1[7]);
        tmp_closure_1[8] = par_step;
        Py_INCREF(tmp_closure_1[8]);
        tmp_closure_1[9] = par_stop_event;
        Py_INCREF(tmp_closure_1[9]);
        tmp_closure_1[10] = par_watch_filter;
        Py_INCREF(tmp_closure_1[10]);
        tmp_closure_1[11] = par_yield_on_timeout;
        Py_INCREF(tmp_closure_1[11]);

        tmp_return_value = MAKE_ASYNCGEN_watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_force_polling);
    Py_DECREF(par_force_polling);
    par_force_polling = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_watch_filter);
    Py_DECREF(par_watch_filter);
    CHECK_OBJECT(par_debounce);
    Py_DECREF(par_debounce);
    CHECK_OBJECT(par_step);
    Py_DECREF(par_step);
    CHECK_OBJECT(par_stop_event);
    Py_DECREF(par_stop_event);
    CHECK_OBJECT(par_rust_timeout);
    Py_DECREF(par_rust_timeout);
    CHECK_OBJECT(par_yield_on_timeout);
    Py_DECREF(par_yield_on_timeout);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_raise_interrupt);
    Py_DECREF(par_raise_interrupt);
    CHECK_OBJECT(par_poll_delay_ms);
    Py_DECREF(par_poll_delay_ms);
    CHECK_OBJECT(par_recursive);
    Py_DECREF(par_recursive);
    CHECK_OBJECT(par_paths);
    Py_DECREF(par_paths);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch_locals {
    PyObject *var_stop_event_;
    PyObject *var_watcher;
    PyObject *var_timeout;
    PyObject *var_CancelledError;
    PyObject *var_tg;
    PyObject *var_raw_changes;
    PyObject *var_changes;
    PyObject *outline_0_var_p;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    PyObject *tmp_with_1__enter;
    PyObject *tmp_with_1__exit;
    nuitka_bool tmp_with_1__indicator;
    PyObject *tmp_with_1__source;
    PyObject *tmp_with_2__enter;
    PyObject *tmp_with_2__exit;
    nuitka_bool tmp_with_2__indicator;
    PyObject *tmp_with_2__source;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    struct Nuitka_ExceptionStackItem exception_preserved_3;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
};
#endif

static PyObject *watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch_context(PyThreadState *tstate, struct Nuitka_AsyncgenObject *asyncgen, PyObject *yield_return_value) {
    CHECK_OBJECT(asyncgen);
    assert(Nuitka_Asyncgen_Check((PyObject *)asyncgen));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch_locals *asyncgen_heap = (struct watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch_locals *)asyncgen->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(asyncgen->m_yield_return_index) {
    case 7: goto yield_return_7;
    case 6: goto yield_return_6;
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    asyncgen_heap->var_stop_event_ = NULL;
    asyncgen_heap->var_watcher = NULL;
    asyncgen_heap->var_timeout = NULL;
    asyncgen_heap->var_CancelledError = NULL;
    asyncgen_heap->var_tg = NULL;
    asyncgen_heap->var_raw_changes = NULL;
    asyncgen_heap->var_changes = NULL;
    asyncgen_heap->outline_0_var_p = NULL;
    asyncgen_heap->tmp_listcomp_1__$0 = NULL;
    asyncgen_heap->tmp_listcomp_1__contraction = NULL;
    asyncgen_heap->tmp_listcomp_1__iter_value_0 = NULL;
    asyncgen_heap->tmp_with_1__enter = NULL;
    asyncgen_heap->tmp_with_1__exit = NULL;
    asyncgen_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    asyncgen_heap->tmp_with_1__source = NULL;
    asyncgen_heap->tmp_with_2__enter = NULL;
    asyncgen_heap->tmp_with_2__exit = NULL;
    asyncgen_heap->tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    asyncgen_heap->tmp_with_2__source = NULL;
    asyncgen_heap->type_description_1 = NULL;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Actual asyncgen body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_f6bb0b29486e2355861b46087e78d6ee, module_watchfiles$main, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    asyncgen->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(asyncgen->m_frame, (PyObject *)asyncgen);

    assert(asyncgen->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, asyncgen->m_frame);
    assert(Py_REFCNT(asyncgen->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (Nuitka_Cell_GET(asyncgen->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[22]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 220;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(asyncgen->m_closure[5]);
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 221;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 221;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[33];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            Py_DECREF(tmp_called_value_1);

            asyncgen_heap->exception_lineno = 224;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }
        asyncgen->m_frame->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 221;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(asyncgen->m_closure[9]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[16]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 227;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(asyncgen->m_closure[9]);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 228;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }
        asyncgen->m_frame->m_frame.f_lineno = 228;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[36]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 228;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }
        assert(asyncgen_heap->var_stop_event_ == NULL);
        asyncgen_heap->var_stop_event_ = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        if (Nuitka_Cell_GET(asyncgen->m_closure[9]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[16]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 230;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = Nuitka_Cell_GET(asyncgen->m_closure[9]);
        assert(asyncgen_heap->var_stop_event_ == NULL);
        Py_INCREF(tmp_assign_source_2);
        asyncgen_heap->var_stop_event_ = tmp_assign_source_2;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 232;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(asyncgen->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[3]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 232;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(asyncgen->m_closure[2]);
        asyncgen->m_frame->m_frame.f_lineno = 232;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 232;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(asyncgen->m_closure[2]);
            PyCell_SET(asyncgen->m_closure[2], tmp_assign_source_3);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            if (Nuitka_Cell_GET(asyncgen->m_closure[3]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[5]);
                asyncgen_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

                asyncgen_heap->exception_lineno = 233;
                asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
                goto try_except_handler_3;
            }

            tmp_iter_arg_1 = Nuitka_Cell_GET(asyncgen->m_closure[3]);
            tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


                asyncgen_heap->exception_lineno = 233;
                asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
                goto try_except_handler_3;
            }
            assert(asyncgen_heap->tmp_listcomp_1__$0 == NULL);
            asyncgen_heap->tmp_listcomp_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
            assert(asyncgen_heap->tmp_listcomp_1__contraction == NULL);
            asyncgen_heap->tmp_listcomp_1__contraction = tmp_assign_source_6;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(asyncgen_heap->tmp_listcomp_1__$0);
            tmp_next_source_1 = asyncgen_heap->tmp_listcomp_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
                    asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
                    asyncgen_heap->exception_lineno = 233;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = asyncgen_heap->tmp_listcomp_1__iter_value_0;
                asyncgen_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(asyncgen_heap->tmp_listcomp_1__iter_value_0);
            tmp_assign_source_8 = asyncgen_heap->tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = asyncgen_heap->outline_0_var_p;
                asyncgen_heap->outline_0_var_p = tmp_assign_source_8;
                Py_INCREF(asyncgen_heap->outline_0_var_p);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_unicode_arg_1;
            CHECK_OBJECT(asyncgen_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = asyncgen_heap->tmp_listcomp_1__contraction;
            CHECK_OBJECT(asyncgen_heap->outline_0_var_p);
            tmp_unicode_arg_1 = asyncgen_heap->outline_0_var_p;
            tmp_append_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


                asyncgen_heap->exception_lineno = 233;
                asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
                goto try_except_handler_4;
            }
            asyncgen_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (asyncgen_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


                asyncgen_heap->exception_lineno = 233;
                asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(asyncgen_heap->tmp_listcomp_1__contraction);
        tmp_args_element_value_4 = asyncgen_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(asyncgen_heap->tmp_listcomp_1__$0);
        Py_DECREF(asyncgen_heap->tmp_listcomp_1__$0);
        asyncgen_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(asyncgen_heap->tmp_listcomp_1__contraction);
        Py_DECREF(asyncgen_heap->tmp_listcomp_1__contraction);
        asyncgen_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(asyncgen_heap->tmp_listcomp_1__iter_value_0);
        asyncgen_heap->tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        asyncgen_heap->exception_keeper_type_1 = asyncgen_heap->exception_type;
        asyncgen_heap->exception_keeper_value_1 = asyncgen_heap->exception_value;
        asyncgen_heap->exception_keeper_tb_1 = asyncgen_heap->exception_tb;
        asyncgen_heap->exception_keeper_lineno_1 = asyncgen_heap->exception_lineno;
        asyncgen_heap->exception_type = NULL;
        asyncgen_heap->exception_value = NULL;
        asyncgen_heap->exception_tb = NULL;
        asyncgen_heap->exception_lineno = 0;

        CHECK_OBJECT(asyncgen_heap->tmp_listcomp_1__$0);
        Py_DECREF(asyncgen_heap->tmp_listcomp_1__$0);
        asyncgen_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(asyncgen_heap->tmp_listcomp_1__contraction);
        Py_DECREF(asyncgen_heap->tmp_listcomp_1__contraction);
        asyncgen_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(asyncgen_heap->tmp_listcomp_1__iter_value_0);
        asyncgen_heap->tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_1;
        asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_1;
        asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_1;
        asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(asyncgen_heap->outline_0_var_p);
        asyncgen_heap->outline_0_var_p = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        asyncgen_heap->exception_keeper_type_2 = asyncgen_heap->exception_type;
        asyncgen_heap->exception_keeper_value_2 = asyncgen_heap->exception_value;
        asyncgen_heap->exception_keeper_tb_2 = asyncgen_heap->exception_tb;
        asyncgen_heap->exception_keeper_lineno_2 = asyncgen_heap->exception_lineno;
        asyncgen_heap->exception_type = NULL;
        asyncgen_heap->exception_value = NULL;
        asyncgen_heap->exception_tb = NULL;
        asyncgen_heap->exception_lineno = 0;

        Py_XDECREF(asyncgen_heap->outline_0_var_p);
        asyncgen_heap->outline_0_var_p = NULL;
        // Re-raise.
        asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_2;
        asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_2;
        asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_2;
        asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        asyncgen_heap->exception_lineno = 233;
        goto try_except_handler_2;
        outline_result_1:;
        if (Nuitka_Cell_GET(asyncgen->m_closure[1]) == NULL) {
            Py_DECREF(tmp_args_element_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[6]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(asyncgen->m_closure[1]);
        CHECK_OBJECT(Nuitka_Cell_GET(asyncgen->m_closure[2]));
        tmp_args_element_value_6 = Nuitka_Cell_GET(asyncgen->m_closure[2]);
        if (Nuitka_Cell_GET(asyncgen->m_closure[4]) == NULL) {
            Py_DECREF(tmp_args_element_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[7]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = Nuitka_Cell_GET(asyncgen->m_closure[4]);
        if (Nuitka_Cell_GET(asyncgen->m_closure[6]) == NULL) {
            Py_DECREF(tmp_args_element_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[8]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_8 = Nuitka_Cell_GET(asyncgen->m_closure[6]);
        asyncgen->m_frame->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }
        assert(asyncgen_heap->tmp_with_2__source == NULL);
        asyncgen_heap->tmp_with_2__source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
        tmp_expression_value_2 = asyncgen_heap->tmp_with_2__source;
        tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[9]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }
        asyncgen->m_frame->m_frame.f_lineno = 233;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }
        assert(asyncgen_heap->tmp_with_2__enter == NULL);
        asyncgen_heap->tmp_with_2__enter = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
        tmp_expression_value_3 = asyncgen_heap->tmp_with_2__source;
        tmp_assign_source_10 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[10]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }
        assert(asyncgen_heap->tmp_with_2__exit == NULL);
        asyncgen_heap->tmp_with_2__exit = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_assign_source_11;
        tmp_assign_source_11 = NUITKA_BOOL_TRUE;
        asyncgen_heap->tmp_with_2__indicator = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
        tmp_assign_source_12 = asyncgen_heap->tmp_with_2__enter;
        assert(asyncgen_heap->var_watcher == NULL);
        Py_INCREF(tmp_assign_source_12);
        asyncgen_heap->var_watcher = tmp_assign_source_12;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 234;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        if (Nuitka_Cell_GET(asyncgen->m_closure[7]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[15]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 234;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_9 = Nuitka_Cell_GET(asyncgen->m_closure[7]);
        asyncgen->m_frame->m_frame.f_lineno = 234;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 234;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        assert(asyncgen_heap->var_timeout == NULL);
        asyncgen_heap->var_timeout = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 235;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        asyncgen->m_frame->m_frame.f_lineno = 235;
        tmp_assign_source_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[38]);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 235;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        assert(asyncgen_heap->var_CancelledError == NULL);
        asyncgen_heap->var_CancelledError = tmp_assign_source_14;
    }
    loop_start_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        asyncgen->m_frame->m_frame.f_lineno = 238;
        tmp_assign_source_15 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[39]);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = asyncgen_heap->tmp_with_1__source;
            asyncgen_heap->tmp_with_1__source = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
        tmp_expression_value_4 = asyncgen_heap->tmp_with_1__source;
        tmp_called_value_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_4, mod_consts[40]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        asyncgen->m_frame->m_frame.f_lineno = 238;
        tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = asyncgen_heap->tmp_with_1__enter;
            asyncgen_heap->tmp_with_1__enter = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
        tmp_expression_value_5 = asyncgen_heap->tmp_with_1__source;
        tmp_assign_source_17 = LOOKUP_SPECIAL(tstate, tmp_expression_value_5, mod_consts[41]);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = asyncgen_heap->tmp_with_1__exit;
            asyncgen_heap->tmp_with_1__exit = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        asyncgen->m_frame->m_frame.f_lineno = 238;
        CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
        tmp_expression_value_7 = asyncgen_heap->tmp_with_1__enter;
        tmp_expression_value_6 = ASYNC_AWAIT(tstate, tmp_expression_value_7, await_enter);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), NULL);
        asyncgen->m_yield_return_index = 1;
        asyncgen->m_yieldfrom = tmp_expression_value_6;
        asyncgen->m_awaiting = true;
        return NULL;

        yield_return_1:
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_7, sizeof(PyObject *), NULL);
        asyncgen->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_18 = yield_return_value;
        {
            PyObject *old = asyncgen_heap->tmp_with_1__enter;
            assert(old != NULL);
            asyncgen_heap->tmp_with_1__enter = tmp_assign_source_18;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_19;
        tmp_assign_source_19 = NUITKA_BOOL_TRUE;
        asyncgen_heap->tmp_with_1__indicator = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
        tmp_assign_source_20 = asyncgen_heap->tmp_with_1__enter;
        {
            PyObject *old = asyncgen_heap->var_tg;
            asyncgen_heap->var_tg = tmp_assign_source_20;
            Py_INCREF(asyncgen_heap->var_tg);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        asyncgen->m_frame->m_frame.f_lineno = 240;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[42]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[43]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }
        if (asyncgen_heap->var_watcher == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[11]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }

        tmp_expression_value_12 = asyncgen_heap->var_watcher;
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[12]);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            Py_DECREF(tmp_called_value_7);

            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }
        if (Nuitka_Cell_GET(asyncgen->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[13]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_11 = Nuitka_Cell_GET(asyncgen->m_closure[0]);
        if (Nuitka_Cell_GET(asyncgen->m_closure[8]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[14]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_12 = Nuitka_Cell_GET(asyncgen->m_closure[8]);
        if (asyncgen_heap->var_timeout == NULL) {
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[17]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_13 = asyncgen_heap->var_timeout;
        if (asyncgen_heap->var_stop_event_ == NULL) {
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_element_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[44]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }

        tmp_args_element_value_14 = asyncgen_heap->var_stop_event_;
        asyncgen->m_frame->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_expression_value_9 = CALL_FUNCTION_WITH_ARGS5(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }
        tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), NULL);
        asyncgen->m_yield_return_index = 2;
        asyncgen->m_yieldfrom = tmp_expression_value_8;
        asyncgen->m_awaiting = true;
        return NULL;

        yield_return_2:
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_10, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_11, sizeof(PyObject *), &tmp_args_element_value_12, sizeof(PyObject *), &tmp_args_element_value_13, sizeof(PyObject *), &tmp_args_element_value_14, sizeof(PyObject *), NULL);
        asyncgen->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 240;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_21 = yield_return_value;
        {
            PyObject *old = asyncgen_heap->var_raw_changes;
            asyncgen_heap->var_raw_changes = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_10:;
    asyncgen_heap->exception_keeper_type_3 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_3 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_3 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_3 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    asyncgen_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (asyncgen_heap->exception_keeper_tb_3 == NULL) {
        asyncgen_heap->exception_keeper_tb_3 = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_3);
    } else if (asyncgen_heap->exception_keeper_lineno_3 != 0) {
        asyncgen_heap->exception_keeper_tb_3 = ADD_TRACEBACK(asyncgen_heap->exception_keeper_tb_3, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_type_3, &asyncgen_heap->exception_keeper_value_3, &asyncgen_heap->exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_tuple_element_1;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT(asyncgen_heap->var_CancelledError);
        tmp_tuple_element_1 = asyncgen_heap->var_CancelledError;
        tmp_cmp_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_3, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = PyExc_KeyboardInterrupt;
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_3, 1, tmp_tuple_element_1);
        asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (asyncgen_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 241;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_3 = (asyncgen_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        if (asyncgen_heap->var_stop_event_ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[44]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 242;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_11;
        }

        tmp_called_instance_4 = asyncgen_heap->var_stop_event_;
        asyncgen->m_frame->m_frame.f_lineno = 242;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[45]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 242;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_2);
    }
    asyncgen_heap->tmp_result = RERAISE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
    if (unlikely(asyncgen_heap->tmp_result == false)) {
        asyncgen_heap->exception_lineno = 244;
    }

    if (asyncgen_heap->exception_tb && asyncgen_heap->exception_tb->tb_frame == &asyncgen->m_frame->m_frame) asyncgen->m_frame->m_frame.f_lineno = asyncgen_heap->exception_tb->tb_lineno;
    asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
    goto try_except_handler_11;
    goto branch_end_3;
    branch_no_3:;
    asyncgen_heap->tmp_result = RERAISE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
    if (unlikely(asyncgen_heap->tmp_result == false)) {
        asyncgen_heap->exception_lineno = 239;
    }

    if (asyncgen_heap->exception_tb && asyncgen_heap->exception_tb->tb_frame == &asyncgen->m_frame->m_frame) asyncgen->m_frame->m_frame.f_lineno = asyncgen_heap->exception_tb->tb_lineno;
    asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
    goto try_except_handler_11;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_11:;
    asyncgen_heap->exception_keeper_type_4 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_4 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_4 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_4 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_1);

    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_4;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_4;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_4;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_4;

    goto try_except_handler_9;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(asyncgen_heap->var_tg);
        tmp_expression_value_13 = asyncgen_heap->var_tg;
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[46]);
        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 245;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_9;
        }
        asyncgen->m_frame->m_frame.f_lineno = 245;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[47]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 245;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_9:;
    asyncgen_heap->exception_keeper_type_5 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_5 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_5 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_5 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Preserve existing published exception id 2.
    asyncgen_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (asyncgen_heap->exception_keeper_tb_5 == NULL) {
        asyncgen_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_5);
    } else if (asyncgen_heap->exception_keeper_lineno_5 != 0) {
        asyncgen_heap->exception_keeper_tb_5 = ADD_TRACEBACK(asyncgen_heap->exception_keeper_tb_5, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_type_5, &asyncgen_heap->exception_keeper_value_5, &asyncgen_heap->exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(asyncgen_heap->tmp_res == -1));
        tmp_condition_result_4 = (asyncgen_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_assign_source_22;
        tmp_assign_source_22 = NUITKA_BOOL_FALSE;
        asyncgen_heap->tmp_with_1__indicator = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        asyncgen->m_frame->m_frame.f_lineno = 238;
        CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
        tmp_called_value_8 = asyncgen_heap->tmp_with_1__exit;
        tmp_args_element_value_15 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_16 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_17 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        asyncgen->m_frame->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_expression_value_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_12;
        }
        tmp_expression_value_14 = ASYNC_AWAIT(tstate, tmp_expression_value_15, await_exit);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_12;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_5, sizeof(bool), &tmp_expression_value_15, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_15, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), &tmp_args_element_value_17, sizeof(PyObject *), NULL);
        SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
        asyncgen->m_yield_return_index = 3;
        asyncgen->m_yieldfrom = tmp_expression_value_14;
        asyncgen->m_awaiting = true;
        return NULL;

        yield_return_3:
        RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_condition_result_5, sizeof(bool), &tmp_expression_value_15, sizeof(PyObject *), &tmp_called_value_8, sizeof(PyObject *), &tmp_args_element_value_15, sizeof(PyObject *), &tmp_args_element_value_16, sizeof(PyObject *), &tmp_args_element_value_17, sizeof(PyObject *), NULL);
        asyncgen->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_12;
        }
        tmp_operand_value_1 = yield_return_value;
        asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (asyncgen_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_5 = (asyncgen_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    asyncgen_heap->tmp_result = RERAISE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
    if (unlikely(asyncgen_heap->tmp_result == false)) {
        asyncgen_heap->exception_lineno = 238;
    }

    if (asyncgen_heap->exception_tb && asyncgen_heap->exception_tb->tb_frame == &asyncgen->m_frame->m_frame) asyncgen->m_frame->m_frame.f_lineno = asyncgen_heap->exception_tb->tb_lineno;
    asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
    goto try_except_handler_12;
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    asyncgen_heap->tmp_result = RERAISE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
    if (unlikely(asyncgen_heap->tmp_result == false)) {
        asyncgen_heap->exception_lineno = 238;
    }

    if (asyncgen_heap->exception_tb && asyncgen_heap->exception_tb->tb_frame == &asyncgen->m_frame->m_frame) asyncgen->m_frame->m_frame.f_lineno = asyncgen_heap->exception_tb->tb_lineno;
    asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
    goto try_except_handler_12;
    branch_end_4:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_12:;
    asyncgen_heap->exception_keeper_type_6 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_6 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_6 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_6 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_2);

    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_6;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_6;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_6;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_3:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    asyncgen_heap->exception_keeper_type_7 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_7 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_7 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_7 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(asyncgen_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = asyncgen_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_called_value_9;
        PyObject *tmp_await_result_1;
        asyncgen->m_frame->m_frame.f_lineno = 238;
        CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
        tmp_called_value_9 = asyncgen_heap->tmp_with_1__exit;
        asyncgen->m_frame->m_frame.f_lineno = 238;
        tmp_expression_value_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_9, mod_consts[29]);

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);

            Py_DECREF(asyncgen_heap->exception_keeper_type_7);
            Py_XDECREF(asyncgen_heap->exception_keeper_value_7);
            Py_XDECREF(asyncgen_heap->exception_keeper_tb_7);

            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_16 = ASYNC_AWAIT(tstate, tmp_expression_value_17, await_exit);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);

            Py_DECREF(asyncgen_heap->exception_keeper_type_7);
            Py_XDECREF(asyncgen_heap->exception_keeper_value_7);
            Py_XDECREF(asyncgen_heap->exception_keeper_tb_7);

            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
        SAVE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
        asyncgen->m_yield_return_index = 4;
        asyncgen->m_yieldfrom = tmp_expression_value_16;
        asyncgen->m_awaiting = true;
        return NULL;

        yield_return_4:
        RESTORE_ASYNCGEN_EXCEPTION(tstate, asyncgen);
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), NULL);
        asyncgen->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);

            Py_DECREF(asyncgen_heap->exception_keeper_type_7);
            Py_XDECREF(asyncgen_heap->exception_keeper_value_7);
            Py_XDECREF(asyncgen_heap->exception_keeper_tb_7);

            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        tmp_await_result_1 = yield_return_value;
        Py_DECREF(tmp_await_result_1);
    }
    branch_no_6:;
    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_7;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_7;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_7;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(asyncgen_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = asyncgen_heap->tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_called_value_10;
        PyObject *tmp_await_result_2;
        asyncgen->m_frame->m_frame.f_lineno = 238;
        CHECK_OBJECT(asyncgen_heap->tmp_with_1__exit);
        tmp_called_value_10 = asyncgen_heap->tmp_with_1__exit;
        asyncgen->m_frame->m_frame.f_lineno = 238;
        tmp_expression_value_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_10, mod_consts[29]);

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        tmp_expression_value_18 = ASYNC_AWAIT(tstate, tmp_expression_value_19, await_exit);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        Nuitka_PreserveHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_10, sizeof(PyObject *), NULL);
        asyncgen->m_yield_return_index = 5;
        asyncgen->m_yieldfrom = tmp_expression_value_18;
        asyncgen->m_awaiting = true;
        return NULL;

        yield_return_5:
        Nuitka_RestoreHeap(asyncgen_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_10, sizeof(PyObject *), NULL);
        asyncgen->m_awaiting = false;

        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 238;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_7;
        }
        tmp_await_result_2 = yield_return_value;
        Py_DECREF(tmp_await_result_2);
    }
    branch_no_7:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    asyncgen_heap->exception_keeper_type_8 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_8 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_8 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_8 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    Py_XDECREF(asyncgen_heap->tmp_with_1__source);
    asyncgen_heap->tmp_with_1__source = NULL;
    Py_XDECREF(asyncgen_heap->tmp_with_1__enter);
    asyncgen_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(asyncgen_heap->tmp_with_1__exit);
    asyncgen_heap->tmp_with_1__exit = NULL;
    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_8;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_8;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_8;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(asyncgen_heap->tmp_with_1__source);
    Py_DECREF(asyncgen_heap->tmp_with_1__source);
    asyncgen_heap->tmp_with_1__source = NULL;
    CHECK_OBJECT(asyncgen_heap->tmp_with_1__enter);
    Py_DECREF(asyncgen_heap->tmp_with_1__enter);
    asyncgen_heap->tmp_with_1__enter = NULL;
    Py_XDECREF(asyncgen_heap->tmp_with_1__exit);
    asyncgen_heap->tmp_with_1__exit = NULL;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        if (asyncgen_heap->var_raw_changes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[48]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 247;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_7 = asyncgen_heap->var_raw_changes;
        tmp_cmp_expr_right_7 = mod_consts[17];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 247;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(asyncgen->m_closure[11]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[18]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 248;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(asyncgen->m_closure[11]));
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 248;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_9 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_expression_value_20;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_20 = PySet_New(NULL);
        asyncgen->m_yield_return_index = 6;
        return tmp_expression_value_20;
        yield_return_6:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 249;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 251;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        asyncgen->m_frame->m_frame.f_lineno = 251;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_6,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 251;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (asyncgen_heap->var_raw_changes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[48]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 252;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_8 = asyncgen_heap->var_raw_changes;
        tmp_cmp_expr_right_8 = mod_consts[25];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 252;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    goto try_return_handler_5;
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        if (asyncgen_heap->var_raw_changes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[48]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 254;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_left_9 = asyncgen_heap->var_raw_changes;
        tmp_cmp_expr_right_9 = mod_consts[21];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 254;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[49];
        asyncgen->m_frame->m_frame.f_lineno = 256;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        asyncgen_heap->exception_type = tmp_raise_type_1;
        asyncgen_heap->exception_lineno = 256;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
        asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
        goto try_except_handler_6;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 258;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        if (asyncgen_heap->var_raw_changes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[48]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 258;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_18 = asyncgen_heap->var_raw_changes;
        if (Nuitka_Cell_GET(asyncgen->m_closure[10]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, mod_consts[27]);
            asyncgen_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, asyncgen_heap->exception_value);

            asyncgen_heap->exception_lineno = 258;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_19 = Nuitka_Cell_GET(asyncgen->m_closure[10]);
        asyncgen->m_frame->m_frame.f_lineno = 258;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 258;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = asyncgen_heap->var_changes;
            asyncgen_heap->var_changes = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        CHECK_OBJECT(asyncgen_heap->var_changes);
        tmp_truth_name_2 = CHECK_IF_TRUE(asyncgen_heap->var_changes);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 259;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 260;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(asyncgen_heap->var_changes);
        tmp_args_element_value_20 = asyncgen_heap->var_changes;
        asyncgen->m_frame->m_frame.f_lineno = 260;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_20);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 260;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_expression_value_21;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(asyncgen_heap->var_changes);
        tmp_expression_value_21 = asyncgen_heap->var_changes;
        Py_INCREF(tmp_expression_value_21);
        asyncgen->m_yield_return_index = 7;
        return tmp_expression_value_21;
        yield_return_7:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 261;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_6;
        }
        tmp_yield_result_2 = yield_return_value;
        Py_DECREF(tmp_yield_result_2);
    }
    branch_no_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_8:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


        asyncgen_heap->exception_lineno = 237;
        asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    asyncgen_heap->exception_keeper_type_9 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_9 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_9 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_9 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Preserve existing published exception id 3.
    asyncgen_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    if (asyncgen_heap->exception_keeper_tb_9 == NULL) {
        asyncgen_heap->exception_keeper_tb_9 = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_9);
    } else if (asyncgen_heap->exception_keeper_lineno_9 != 0) {
        asyncgen_heap->exception_keeper_tb_9 = ADD_TRACEBACK(asyncgen_heap->exception_keeper_tb_9, asyncgen->m_frame, asyncgen_heap->exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_keeper_type_9, &asyncgen_heap->exception_keeper_value_9, &asyncgen_heap->exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = PyExc_BaseException;
        asyncgen_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(asyncgen_heap->tmp_res == -1));
        tmp_condition_result_13 = (asyncgen_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        nuitka_bool tmp_assign_source_24;
        tmp_assign_source_24 = NUITKA_BOOL_FALSE;
        asyncgen_heap->tmp_with_2__indicator = tmp_assign_source_24;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
        tmp_called_value_13 = asyncgen_heap->tmp_with_2__exit;
        tmp_args_element_value_21 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_22 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_23 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        asyncgen->m_frame->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_13, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_13;
        }
        asyncgen_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (asyncgen_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_13;
        }
        tmp_condition_result_14 = (asyncgen_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    asyncgen_heap->tmp_result = RERAISE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
    if (unlikely(asyncgen_heap->tmp_result == false)) {
        asyncgen_heap->exception_lineno = 233;
    }

    if (asyncgen_heap->exception_tb && asyncgen_heap->exception_tb->tb_frame == &asyncgen->m_frame->m_frame) asyncgen->m_frame->m_frame.f_lineno = asyncgen_heap->exception_tb->tb_lineno;
    asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
    goto try_except_handler_13;
    branch_no_14:;
    goto branch_end_13;
    branch_no_13:;
    asyncgen_heap->tmp_result = RERAISE_EXCEPTION(&asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);
    if (unlikely(asyncgen_heap->tmp_result == false)) {
        asyncgen_heap->exception_lineno = 233;
    }

    if (asyncgen_heap->exception_tb && asyncgen_heap->exception_tb->tb_frame == &asyncgen->m_frame->m_frame) asyncgen->m_frame->m_frame.f_lineno = asyncgen_heap->exception_tb->tb_lineno;
    asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
    goto try_except_handler_13;
    branch_end_13:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_13:;
    asyncgen_heap->exception_keeper_type_10 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_10 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_10 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_10 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_10;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_10;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_10;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_10;

    goto try_except_handler_5;
    // End of try:
    try_end_6:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &asyncgen_heap->exception_preserved_3);

    goto try_end_7;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Return handler code:
    try_return_handler_5:;
    {
        bool tmp_condition_result_15;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(asyncgen_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = asyncgen_heap->tmp_with_2__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_15 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
        tmp_called_value_14 = asyncgen_heap->tmp_with_2__exit;
        asyncgen->m_frame->m_frame.f_lineno = 233;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_14, mod_consts[29]);

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_15:;
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_5:;
    asyncgen_heap->exception_keeper_type_11 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_11 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_11 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_11 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    {
        bool tmp_condition_result_16;
        nuitka_bool tmp_cmp_expr_left_12;
        nuitka_bool tmp_cmp_expr_right_12;
        assert(asyncgen_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_12 = asyncgen_heap->tmp_with_2__indicator;
        tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_16 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
        tmp_called_value_15 = asyncgen_heap->tmp_with_2__exit;
        asyncgen->m_frame->m_frame.f_lineno = 233;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_15, mod_consts[29]);

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);

            Py_DECREF(asyncgen_heap->exception_keeper_type_11);
            Py_XDECREF(asyncgen_heap->exception_keeper_value_11);
            Py_XDECREF(asyncgen_heap->exception_keeper_tb_11);

            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_16:;
    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_11;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_11;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_11;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_11;

    goto try_except_handler_2;
    // End of try:
    try_end_8:;
    {
        bool tmp_condition_result_17;
        nuitka_bool tmp_cmp_expr_left_13;
        nuitka_bool tmp_cmp_expr_right_13;
        assert(asyncgen_heap->tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_13 = asyncgen_heap->tmp_with_2__indicator;
        tmp_cmp_expr_right_13 = NUITKA_BOOL_TRUE;
        tmp_condition_result_17 = (tmp_cmp_expr_left_13 == tmp_cmp_expr_right_13) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
        tmp_called_value_16 = asyncgen_heap->tmp_with_2__exit;
        asyncgen->m_frame->m_frame.f_lineno = 233;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_16, mod_consts[29]);

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &asyncgen_heap->exception_type, &asyncgen_heap->exception_value, &asyncgen_heap->exception_tb);


            asyncgen_heap->exception_lineno = 233;
            asyncgen_heap->type_description_1 = "ccccccccccccooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_17:;
    goto try_end_9;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
    Py_DECREF(asyncgen_heap->tmp_with_2__source);
    asyncgen_heap->tmp_with_2__source = NULL;
    CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
    Py_DECREF(asyncgen_heap->tmp_with_2__enter);
    asyncgen_heap->tmp_with_2__enter = NULL;
    Py_XDECREF(asyncgen_heap->tmp_with_2__exit);
    asyncgen_heap->tmp_with_2__exit = NULL;
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    asyncgen_heap->exception_keeper_type_12 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_12 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_12 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_12 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    Py_XDECREF(asyncgen_heap->tmp_with_2__source);
    asyncgen_heap->tmp_with_2__source = NULL;
    Py_XDECREF(asyncgen_heap->tmp_with_2__enter);
    asyncgen_heap->tmp_with_2__enter = NULL;
    Py_XDECREF(asyncgen_heap->tmp_with_2__exit);
    asyncgen_heap->tmp_with_2__exit = NULL;
    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_12;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_12;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_12;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;

    // Release exception attached to the frame
    DROP_ASYNCGEN_EXCEPTION(asyncgen);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
    Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, asyncgen_heap->exception_type)) {
        if (asyncgen_heap->exception_tb == NULL) {
            asyncgen_heap->exception_tb = MAKE_TRACEBACK(asyncgen->m_frame, asyncgen_heap->exception_lineno);
        } else if (asyncgen_heap->exception_tb->tb_frame != &asyncgen->m_frame->m_frame) {
            asyncgen_heap->exception_tb = ADD_TRACEBACK(asyncgen_heap->exception_tb, asyncgen->m_frame, asyncgen_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            asyncgen->m_frame,
            asyncgen_heap->type_description_1,
            asyncgen->m_closure[10],
            asyncgen->m_closure[0],
            asyncgen->m_closure[8],
            asyncgen->m_closure[9],
            asyncgen->m_closure[7],
            asyncgen->m_closure[11],
            asyncgen->m_closure[1],
            asyncgen->m_closure[5],
            asyncgen->m_closure[2],
            asyncgen->m_closure[4],
            asyncgen->m_closure[6],
            asyncgen->m_closure[3],
            asyncgen_heap->var_stop_event_,
            asyncgen_heap->var_watcher,
            asyncgen_heap->var_timeout,
            asyncgen_heap->var_CancelledError,
            asyncgen_heap->var_tg,
            asyncgen_heap->var_raw_changes,
            asyncgen_heap->var_changes
        );


        // Release cached frame if used for exception.
        if (asyncgen->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(asyncgen->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(asyncgen));
#endif
    Py_CLEAR(EXC_VALUE_F(asyncgen));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(asyncgen));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(asyncgen_heap->tmp_with_2__source);
    Py_DECREF(asyncgen_heap->tmp_with_2__source);
    asyncgen_heap->tmp_with_2__source = NULL;
    CHECK_OBJECT(asyncgen_heap->tmp_with_2__enter);
    Py_DECREF(asyncgen_heap->tmp_with_2__enter);
    asyncgen_heap->tmp_with_2__enter = NULL;
    CHECK_OBJECT(asyncgen_heap->tmp_with_2__exit);
    Py_DECREF(asyncgen_heap->tmp_with_2__exit);
    asyncgen_heap->tmp_with_2__exit = NULL;
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(asyncgen_heap->var_stop_event_);
    asyncgen_heap->var_stop_event_ = NULL;
    Py_XDECREF(asyncgen_heap->var_watcher);
    asyncgen_heap->var_watcher = NULL;
    Py_XDECREF(asyncgen_heap->var_timeout);
    asyncgen_heap->var_timeout = NULL;
    Py_XDECREF(asyncgen_heap->var_CancelledError);
    asyncgen_heap->var_CancelledError = NULL;
    Py_XDECREF(asyncgen_heap->var_tg);
    asyncgen_heap->var_tg = NULL;
    Py_XDECREF(asyncgen_heap->var_raw_changes);
    asyncgen_heap->var_raw_changes = NULL;
    Py_XDECREF(asyncgen_heap->var_changes);
    asyncgen_heap->var_changes = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    asyncgen_heap->exception_keeper_type_13 = asyncgen_heap->exception_type;
    asyncgen_heap->exception_keeper_value_13 = asyncgen_heap->exception_value;
    asyncgen_heap->exception_keeper_tb_13 = asyncgen_heap->exception_tb;
    asyncgen_heap->exception_keeper_lineno_13 = asyncgen_heap->exception_lineno;
    asyncgen_heap->exception_type = NULL;
    asyncgen_heap->exception_value = NULL;
    asyncgen_heap->exception_tb = NULL;
    asyncgen_heap->exception_lineno = 0;

    Py_XDECREF(asyncgen_heap->var_stop_event_);
    asyncgen_heap->var_stop_event_ = NULL;
    Py_XDECREF(asyncgen_heap->var_watcher);
    asyncgen_heap->var_watcher = NULL;
    Py_XDECREF(asyncgen_heap->var_timeout);
    asyncgen_heap->var_timeout = NULL;
    Py_XDECREF(asyncgen_heap->var_CancelledError);
    asyncgen_heap->var_CancelledError = NULL;
    Py_XDECREF(asyncgen_heap->var_tg);
    asyncgen_heap->var_tg = NULL;
    Py_XDECREF(asyncgen_heap->var_raw_changes);
    asyncgen_heap->var_raw_changes = NULL;
    Py_XDECREF(asyncgen_heap->var_changes);
    asyncgen_heap->var_changes = NULL;
    // Re-raise.
    asyncgen_heap->exception_type = asyncgen_heap->exception_keeper_type_13;
    asyncgen_heap->exception_value = asyncgen_heap->exception_keeper_value_13;
    asyncgen_heap->exception_tb = asyncgen_heap->exception_keeper_tb_13;
    asyncgen_heap->exception_lineno = asyncgen_heap->exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("return must be present");

    function_exception_exit:

    assert(asyncgen_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, asyncgen_heap->exception_type, asyncgen_heap->exception_value, asyncgen_heap->exception_tb);
    return NULL;
    function_return_exit:;

    return NULL;

}

static PyObject *MAKE_ASYNCGEN_watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch(struct Nuitka_CellObject **closure) {
    return Nuitka_Asyncgen_New(
        watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch_context,
        module_watchfiles$main,
        mod_consts[50],
        NULL,
        codeobj_f6bb0b29486e2355861b46087e78d6ee,
        closure,
        12,
#if 1
        sizeof(struct watchfiles$main$$$function__4_awatch$$$asyncgen__1_awatch_locals)
#else
        0
#endif
    );
}


static PyObject *impl_watchfiles$main$$$function__5__prep_changes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_raw_changes = python_pars[0];
    PyObject *par_watch_filter = python_pars[1];
    PyObject *var_changes = NULL;
    PyObject *outline_0_var_change = NULL;
    PyObject *outline_0_var_path = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *tmp_setcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_setcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_setcontraction_1__$0 = NULL;
    PyObject *tmp_setcontraction_1__contraction = NULL;
    PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_setcontraction_2__$0 = NULL;
    PyObject *tmp_setcontraction_2__contraction = NULL;
    PyObject *tmp_setcontraction_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_bd4c033cf2f5bdc727117ad49f59e15b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
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
    static struct Nuitka_FrameObject *cache_frame_bd4c033cf2f5bdc727117ad49f59e15b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bd4c033cf2f5bdc727117ad49f59e15b)) {
        Py_XDECREF(cache_frame_bd4c033cf2f5bdc727117ad49f59e15b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd4c033cf2f5bdc727117ad49f59e15b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd4c033cf2f5bdc727117ad49f59e15b = MAKE_FUNCTION_FRAME(tstate, codeobj_bd4c033cf2f5bdc727117ad49f59e15b, module_watchfiles$main, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bd4c033cf2f5bdc727117ad49f59e15b->m_type_description == NULL);
    frame_bd4c033cf2f5bdc727117ad49f59e15b = cache_frame_bd4c033cf2f5bdc727117ad49f59e15b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bd4c033cf2f5bdc727117ad49f59e15b);
    assert(Py_REFCNT(frame_bd4c033cf2f5bdc727117ad49f59e15b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_raw_changes);
            tmp_iter_arg_1 = par_raw_changes;
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_setcontraction_1__$0 == NULL);
            tmp_setcontraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PySet_New(NULL);
            assert(tmp_setcontraction_1__contraction == NULL);
            tmp_setcontraction_1__contraction = tmp_assign_source_3;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_setcontraction_1__$0);
            tmp_next_source_1 = tmp_setcontraction_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooo";
                    exception_lineno = 268;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_setcontraction_1__iter_value_0;
                tmp_setcontraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_setcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_setcontraction_1__iter_value_0;
            tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_setcontraction$tuple_unpack_1__source_iter;
                tmp_setcontraction$tuple_unpack_1__source_iter = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_setcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_6 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooo";
                exception_lineno = 268;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_setcontraction$tuple_unpack_1__element_1;
                tmp_setcontraction$tuple_unpack_1__element_1 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_setcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_7 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooo";
                exception_lineno = 268;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_setcontraction$tuple_unpack_1__element_2;
                tmp_setcontraction$tuple_unpack_1__element_2 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_setcontraction$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                        type_description_1 = "ooo";
                        exception_lineno = 268;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[51];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "ooo";
                exception_lineno = 268;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_setcontraction$tuple_unpack_1__source_iter);
        tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
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

        Py_XDECREF(tmp_setcontraction$tuple_unpack_1__element_1);
        tmp_setcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_setcontraction$tuple_unpack_1__element_2);
        tmp_setcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_setcontraction$tuple_unpack_1__source_iter);
        tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_8 = tmp_setcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_change;
                outline_0_var_change = tmp_assign_source_8;
                Py_INCREF(outline_0_var_change);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_setcontraction$tuple_unpack_1__element_1);
        tmp_setcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_setcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_9 = tmp_setcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_path;
                outline_0_var_path = tmp_assign_source_9;
                Py_INCREF(outline_0_var_path);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_setcontraction$tuple_unpack_1__element_2);
        tmp_setcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_add_set_1;
            PyObject *tmp_add_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_setcontraction_1__contraction);
            tmp_add_set_1 = tmp_setcontraction_1__contraction;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_change);
            tmp_args_element_value_1 = outline_0_var_change;
            frame_bd4c033cf2f5bdc727117ad49f59e15b->m_frame.f_lineno = 268;
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_add_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_add_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(outline_0_var_path);
            tmp_tuple_element_1 = outline_0_var_path;
            PyTuple_SET_ITEM0(tmp_add_value_1, 1, tmp_tuple_element_1);
            assert(PySet_Check(tmp_add_set_1));
            tmp_res = PySet_Add(tmp_add_set_1, tmp_add_value_1);
            Py_DECREF(tmp_add_value_1);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        tmp_assign_source_1 = tmp_setcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_setcontraction_1__$0);
        Py_DECREF(tmp_setcontraction_1__$0);
        tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        Py_DECREF(tmp_setcontraction_1__contraction);
        tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_1__iter_value_0);
        tmp_setcontraction_1__iter_value_0 = NULL;
        goto try_return_handler_2;
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

        CHECK_OBJECT(tmp_setcontraction_1__$0);
        Py_DECREF(tmp_setcontraction_1__$0);
        tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        Py_DECREF(tmp_setcontraction_1__contraction);
        tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_1__iter_value_0);
        tmp_setcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_change);
        outline_0_var_change = NULL;
        Py_XDECREF(outline_0_var_path);
        outline_0_var_path = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_change);
        outline_0_var_change = NULL;
        Py_XDECREF(outline_0_var_path);
        outline_0_var_path = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 268;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_changes == NULL);
        var_changes = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_watch_filter);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_watch_filter);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_changes);
            tmp_iter_arg_3 = var_changes;
            tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            if (tmp_assign_source_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooo";
                goto try_except_handler_6;
            }
            assert(tmp_setcontraction_2__$0 == NULL);
            tmp_setcontraction_2__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = PySet_New(NULL);
            assert(tmp_setcontraction_2__contraction == NULL);
            tmp_setcontraction_2__contraction = tmp_assign_source_12;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_setcontraction_2__$0);
            tmp_next_source_2 = tmp_setcontraction_2__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooo";
                    exception_lineno = 270;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_setcontraction_2__iter_value_0;
                tmp_setcontraction_2__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_setcontraction_2__iter_value_0);
            tmp_assign_source_14 = tmp_setcontraction_2__iter_value_0;
            {
                PyObject *old = outline_1_var_c;
                outline_1_var_c = tmp_assign_source_14;
                Py_INCREF(outline_1_var_c);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            int tmp_truth_name_2;
            if (par_watch_filter == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[27]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 270;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }

            tmp_called_value_2 = par_watch_filter;
            CHECK_OBJECT(outline_1_var_c);
            tmp_expression_value_1 = outline_1_var_c;
            tmp_subscript_value_1 = mod_consts[53];
            tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
            if (tmp_args_element_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(outline_1_var_c);
            tmp_expression_value_2 = outline_1_var_c;
            tmp_subscript_value_2 = mod_consts[54];
            tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
            if (tmp_args_element_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_args_element_value_2);

                exception_lineno = 270;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
            frame_bd4c033cf2f5bdc727117ad49f59e15b->m_frame.f_lineno = 270;
            {
                PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_call_result_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_2 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 270;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
            tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_1);
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        {
            PyObject *tmp_add_set_2;
            PyObject *tmp_add_value_2;
            CHECK_OBJECT(tmp_setcontraction_2__contraction);
            tmp_add_set_2 = tmp_setcontraction_2__contraction;
            CHECK_OBJECT(outline_1_var_c);
            tmp_add_value_2 = outline_1_var_c;
            assert(PySet_Check(tmp_add_set_2));
            tmp_res = PySet_Add(tmp_add_set_2, tmp_add_value_2);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 270;
                type_description_1 = "ooo";
                goto try_except_handler_7;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_setcontraction_2__contraction);
        tmp_assign_source_10 = tmp_setcontraction_2__contraction;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_setcontraction_2__$0);
        Py_DECREF(tmp_setcontraction_2__$0);
        tmp_setcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_2__contraction);
        Py_DECREF(tmp_setcontraction_2__contraction);
        tmp_setcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_2__iter_value_0);
        tmp_setcontraction_2__iter_value_0 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_setcontraction_2__$0);
        Py_DECREF(tmp_setcontraction_2__$0);
        tmp_setcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_2__contraction);
        Py_DECREF(tmp_setcontraction_2__contraction);
        tmp_setcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_2__iter_value_0);
        tmp_setcontraction_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 270;
        goto frame_exception_exit_1;
        outline_result_2:;
        {
            PyObject *old = var_changes;
            assert(old != NULL);
            var_changes = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd4c033cf2f5bdc727117ad49f59e15b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd4c033cf2f5bdc727117ad49f59e15b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd4c033cf2f5bdc727117ad49f59e15b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd4c033cf2f5bdc727117ad49f59e15b,
        type_description_1,
        par_raw_changes,
        par_watch_filter,
        var_changes
    );


    // Release cached frame if used for exception.
    if (frame_bd4c033cf2f5bdc727117ad49f59e15b == cache_frame_bd4c033cf2f5bdc727117ad49f59e15b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bd4c033cf2f5bdc727117ad49f59e15b);
        cache_frame_bd4c033cf2f5bdc727117ad49f59e15b = NULL;
    }

    assertFrameObject(frame_bd4c033cf2f5bdc727117ad49f59e15b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_changes);
    tmp_return_value = var_changes;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_changes);
    Py_DECREF(var_changes);
    var_changes = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_changes);
    var_changes = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_raw_changes);
    Py_DECREF(par_raw_changes);
    CHECK_OBJECT(par_watch_filter);
    Py_DECREF(par_watch_filter);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_raw_changes);
    Py_DECREF(par_raw_changes);
    CHECK_OBJECT(par_watch_filter);
    Py_DECREF(par_watch_filter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchfiles$main$$$function__6__log_changes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_changes = python_pars[0];
    PyObject *var_count = NULL;
    PyObject *var_plural = NULL;
    struct Nuitka_FrameObject *frame_288ab09f877f7aba732234eb4dedbaa6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_288ab09f877f7aba732234eb4dedbaa6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_288ab09f877f7aba732234eb4dedbaa6)) {
        Py_XDECREF(cache_frame_288ab09f877f7aba732234eb4dedbaa6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_288ab09f877f7aba732234eb4dedbaa6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_288ab09f877f7aba732234eb4dedbaa6 = MAKE_FUNCTION_FRAME(tstate, codeobj_288ab09f877f7aba732234eb4dedbaa6, module_watchfiles$main, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_288ab09f877f7aba732234eb4dedbaa6->m_type_description == NULL);
    frame_288ab09f877f7aba732234eb4dedbaa6 = cache_frame_288ab09f877f7aba732234eb4dedbaa6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_288ab09f877f7aba732234eb4dedbaa6);
    assert(Py_REFCNT(frame_288ab09f877f7aba732234eb4dedbaa6) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        int tmp_truth_name_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_288ab09f877f7aba732234eb4dedbaa6->m_frame.f_lineno = 275;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_changes);
        tmp_len_arg_1 = par_changes;
        tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_count == NULL);
        var_count = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_count);
        tmp_cmp_expr_left_1 = var_count;
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_2 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_2 = mod_consts[58];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_2 = mod_consts[59];
        condexpr_end_1:;
        assert(var_plural == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_plural = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        int tmp_truth_name_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[55]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[60]);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_288ab09f877f7aba732234eb4dedbaa6->m_frame.f_lineno = 278;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 278;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = mod_consts[61];
        CHECK_OBJECT(var_count);
        tmp_args_element_value_4 = var_count;
        CHECK_OBJECT(var_plural);
        tmp_args_element_value_5 = var_plural;
        CHECK_OBJECT(par_changes);
        tmp_args_element_value_6 = par_changes;
        frame_288ab09f877f7aba732234eb4dedbaa6->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS4(
                tstate,
                tmp_called_instance_1,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[63];
        CHECK_OBJECT(var_count);
        tmp_args_element_value_8 = var_count;
        CHECK_OBJECT(var_plural);
        tmp_args_element_value_9 = var_plural;
        frame_288ab09f877f7aba732234eb4dedbaa6->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_4 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_2,
                mod_consts[62],
                call_args
            );
        }

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_end_2:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_288ab09f877f7aba732234eb4dedbaa6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_288ab09f877f7aba732234eb4dedbaa6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_288ab09f877f7aba732234eb4dedbaa6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_288ab09f877f7aba732234eb4dedbaa6,
        type_description_1,
        par_changes,
        var_count,
        var_plural
    );


    // Release cached frame if used for exception.
    if (frame_288ab09f877f7aba732234eb4dedbaa6 == cache_frame_288ab09f877f7aba732234eb4dedbaa6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_288ab09f877f7aba732234eb4dedbaa6);
        cache_frame_288ab09f877f7aba732234eb4dedbaa6 = NULL;
    }

    assertFrameObject(frame_288ab09f877f7aba732234eb4dedbaa6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_plural);
    var_plural = NULL;
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

    Py_XDECREF(var_count);
    var_count = NULL;
    Py_XDECREF(var_plural);
    var_plural = NULL;
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
    CHECK_OBJECT(par_changes);
    Py_DECREF(par_changes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_changes);
    Py_DECREF(par_changes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchfiles$main$$$function__7__calc_async_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_timeout = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_timeout);
        tmp_cmp_expr_left_1 = par_timeout;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[64];
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    goto branch_end_1;
    branch_no_1:;
    CHECK_OBJECT(par_timeout);
    tmp_return_value = par_timeout;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;
    branch_end_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_timeout);
    Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchfiles$main$$$function__8__default_force_polling(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_force_polling = python_pars[0];
    PyObject *var_env_var = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_7310272afde0ab15cab485b04ce2e72b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7310272afde0ab15cab485b04ce2e72b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_force_polling);
        tmp_cmp_expr_left_1 = par_force_polling;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_force_polling);
    tmp_return_value = par_force_polling;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    branch_no_1:;
    if (isFrameUnusable(cache_frame_7310272afde0ab15cab485b04ce2e72b)) {
        Py_XDECREF(cache_frame_7310272afde0ab15cab485b04ce2e72b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7310272afde0ab15cab485b04ce2e72b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7310272afde0ab15cab485b04ce2e72b = MAKE_FUNCTION_FRAME(tstate, codeobj_7310272afde0ab15cab485b04ce2e72b, module_watchfiles$main, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7310272afde0ab15cab485b04ce2e72b->m_type_description == NULL);
    frame_7310272afde0ab15cab485b04ce2e72b = cache_frame_7310272afde0ab15cab485b04ce2e72b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7310272afde0ab15cab485b04ce2e72b);
    assert(Py_REFCNT(frame_7310272afde0ab15cab485b04ce2e72b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_7310272afde0ab15cab485b04ce2e72b->m_frame.f_lineno = 305;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[67],
            PyTuple_GET_ITEM(mod_consts[68], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_env_var == NULL);
        var_env_var = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_env_var);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_env_var);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_env_var);
        tmp_expression_value_1 = var_env_var;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[69]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7310272afde0ab15cab485b04ce2e72b->m_frame.f_lineno = 307;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = PySet_New(mod_consts[70]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7310272afde0ab15cab485b04ce2e72b->m_frame.f_lineno = 309;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7310272afde0ab15cab485b04ce2e72b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7310272afde0ab15cab485b04ce2e72b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7310272afde0ab15cab485b04ce2e72b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7310272afde0ab15cab485b04ce2e72b,
        type_description_1,
        par_force_polling,
        var_env_var
    );


    // Release cached frame if used for exception.
    if (frame_7310272afde0ab15cab485b04ce2e72b == cache_frame_7310272afde0ab15cab485b04ce2e72b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7310272afde0ab15cab485b04ce2e72b);
        cache_frame_7310272afde0ab15cab485b04ce2e72b = NULL;
    }

    assertFrameObject(frame_7310272afde0ab15cab485b04ce2e72b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_env_var);
    var_env_var = NULL;
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

    Py_XDECREF(var_env_var);
    var_env_var = NULL;
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
    CHECK_OBJECT(par_force_polling);
    Py_DECREF(par_force_polling);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_force_polling);
    Py_DECREF(par_force_polling);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_watchfiles$main$$$function__9__auto_force_polling(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_platform = NULL;
    PyObject *var_uname = NULL;
    struct Nuitka_FrameObject *frame_5e469396e1f1de3a0854ac04de314903;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5e469396e1f1de3a0854ac04de314903 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5e469396e1f1de3a0854ac04de314903)) {
        Py_XDECREF(cache_frame_5e469396e1f1de3a0854ac04de314903);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5e469396e1f1de3a0854ac04de314903 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5e469396e1f1de3a0854ac04de314903 = MAKE_FUNCTION_FRAME(tstate, codeobj_5e469396e1f1de3a0854ac04de314903, module_watchfiles$main, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5e469396e1f1de3a0854ac04de314903->m_type_description == NULL);
    frame_5e469396e1f1de3a0854ac04de314903 = cache_frame_5e469396e1f1de3a0854ac04de314903;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5e469396e1f1de3a0854ac04de314903);
    assert(Py_REFCNT(frame_5e469396e1f1de3a0854ac04de314903) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[73];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_watchfiles$main;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[53];
        frame_5e469396e1f1de3a0854ac04de314903->m_frame.f_lineno = 318;
        tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_platform == NULL);
        var_platform = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_platform);
        tmp_called_instance_1 = var_platform;
        frame_5e469396e1f1de3a0854ac04de314903->m_frame.f_lineno = 320;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[74]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_uname == NULL);
        var_uname = tmp_assign_source_2;
    }
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_cmp_expr_left_1 = mod_consts[75];
        CHECK_OBJECT(var_uname);
        tmp_expression_value_2 = var_uname;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[76]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[69]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5e469396e1f1de3a0854ac04de314903->m_frame.f_lineno = 321;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_uname);
        tmp_expression_value_4 = var_uname;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[77]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[69]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5e469396e1f1de3a0854ac04de314903->m_frame.f_lineno = 321;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[78];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5e469396e1f1de3a0854ac04de314903, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5e469396e1f1de3a0854ac04de314903->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5e469396e1f1de3a0854ac04de314903, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5e469396e1f1de3a0854ac04de314903,
        type_description_1,
        var_platform,
        var_uname
    );


    // Release cached frame if used for exception.
    if (frame_5e469396e1f1de3a0854ac04de314903 == cache_frame_5e469396e1f1de3a0854ac04de314903) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5e469396e1f1de3a0854ac04de314903);
        cache_frame_5e469396e1f1de3a0854ac04de314903 = NULL;
    }

    assertFrameObject(frame_5e469396e1f1de3a0854ac04de314903);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_platform);
    Py_DECREF(var_platform);
    var_platform = NULL;
    CHECK_OBJECT(var_uname);
    Py_DECREF(var_uname);
    var_uname = NULL;
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

    Py_XDECREF(var_platform);
    var_platform = NULL;
    Py_XDECREF(var_uname);
    var_uname = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__1_raw_str(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchfiles$main$$$function__1_raw_str,
        mod_consts[126],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_a73ecb8e35efae1debef157938d46491,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchfiles$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__3_watch(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchfiles$main$$$function__3_watch,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4f8e242b131ae31a81a17beeeaf81577,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchfiles$main,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__4_awatch(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchfiles$main$$$function__4_awatch,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f6bb0b29486e2355861b46087e78d6ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_watchfiles$main,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__5__prep_changes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchfiles$main$$$function__5__prep_changes,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bd4c033cf2f5bdc727117ad49f59e15b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchfiles$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__6__log_changes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchfiles$main$$$function__6__log_changes,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_288ab09f877f7aba732234eb4dedbaa6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchfiles$main,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__7__calc_async_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchfiles$main$$$function__7__calc_async_timeout,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3856162b5327cbee7f1361b31fb6af58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchfiles$main,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__8__default_force_polling(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchfiles$main$$$function__8__default_force_polling,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7310272afde0ab15cab485b04ce2e72b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchfiles$main,
        mod_consts[72],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_watchfiles$main$$$function__9__auto_force_polling(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_watchfiles$main$$$function__9__auto_force_polling,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5e469396e1f1de3a0854ac04de314903,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_watchfiles$main,
        mod_consts[79],
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

function_impl_code functable_watchfiles$main[] = {
    impl_watchfiles$main$$$function__1_raw_str,
    impl_watchfiles$main$$$function__3_watch,
    impl_watchfiles$main$$$function__4_awatch,
    impl_watchfiles$main$$$function__5__prep_changes,
    impl_watchfiles$main$$$function__6__log_changes,
    impl_watchfiles$main$$$function__7__calc_async_timeout,
    impl_watchfiles$main$$$function__8__default_force_polling,
    impl_watchfiles$main$$$function__9__auto_force_polling,
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

    function_impl_code *current = functable_watchfiles$main;
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

    if (offset > sizeof(functable_watchfiles$main) || offset < 0) {
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
        functable_watchfiles$main[offset],
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
        module_watchfiles$main,
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
PyObject *modulecode_watchfiles$main(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("watchfiles.main");

    // Store the module for future use.
    module_watchfiles$main = module;

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
        PRINT_STRING("watchfiles.main: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("watchfiles.main: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwatchfiles$main\n");

    moduledict_watchfiles$main = MODULE_DICT(module_watchfiles$main);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_watchfiles$main,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_watchfiles$main,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[58]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_watchfiles$main,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_watchfiles$main,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_watchfiles$main,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_watchfiles$main);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_watchfiles$main);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_1d4fe37fa9d63b0edf051df5ee828c43;
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
    int tmp_res;
    PyObject *locals_watchfiles$main$$$class__1_Change_18 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_62175c82aa79c502f43d76d224029150_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_2);
    }
    frame_1d4fe37fa9d63b0edf051df5ee828c43 = MAKE_MODULE_FRAME(codeobj_1d4fe37fa9d63b0edf051df5ee828c43, module_watchfiles$main);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1d4fe37fa9d63b0edf051df5ee828c43);
    assert(Py_REFCNT(frame_1d4fe37fa9d63b0edf051df5ee828c43) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[83], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[84], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[56];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_watchfiles$main;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[53];
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[31];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_watchfiles$main;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[53];
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 4;
        tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[87];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_watchfiles$main;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[88];
        tmp_level_value_3 = mod_consts[53];
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[89],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[90];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_watchfiles$main;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[91];
        tmp_level_value_4 = mod_consts[53];
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[92],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_10 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_10);
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_False;
        UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[94],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[94]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[95],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[95]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[96],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[96]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[97],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[97]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[98],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[98]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[99],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[99]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[100],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[100]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_18);
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[35];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_watchfiles$main;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[53];
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 9;
        tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[101];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_watchfiles$main;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[102];
        tmp_level_value_6 = mod_consts[54];
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 11;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[4],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[4]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[103];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_watchfiles$main;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[104];
        tmp_level_value_7 = mod_consts[54];
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 12;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_watchfiles$main,
                mod_consts[105],
                mod_consts[53]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[105]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[106];
        UPDATE_STRING_DICT0(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 15;
        tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[108],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_23);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_24, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
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


            exception_lineno = 18;

            goto try_except_handler_2;
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
        tmp_subscript_value_1 = mod_consts[53];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_27;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[110]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[110]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[52];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 18;
        tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[111]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
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
        PyObject *tmp_name_value_8;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[112];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_8 = mod_consts[113];
        tmp_default_value_1 = mod_consts[114];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_8, tmp_default_value_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
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
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[113]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 18;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_watchfiles$main$$$class__1_Change_18 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[115];
        tmp_res = PyObject_SetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[116], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[117];
        tmp_res = PyObject_SetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[80], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[118], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        frame_62175c82aa79c502f43d76d224029150_2 = MAKE_CLASS_FRAME(tstate, codeobj_62175c82aa79c502f43d76d224029150, module_watchfiles$main, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_62175c82aa79c502f43d76d224029150_2);
        assert(Py_REFCNT(frame_62175c82aa79c502f43d76d224029150_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[54];
        tmp_res = PyObject_SetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[119], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[121], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[124];
            tmp_dict_value_1 = PyObject_GetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[125]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_watchfiles$main$$$function__1_raw_str(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[126], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_62175c82aa79c502f43d76d224029150_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_62175c82aa79c502f43d76d224029150_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_62175c82aa79c502f43d76d224029150_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_62175c82aa79c502f43d76d224029150_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_62175c82aa79c502f43d76d224029150_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
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


                exception_lineno = 18;

                goto try_except_handler_4;
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
        tmp_res = PyObject_SetItem(locals_watchfiles$main$$$class__1_Change_18, mod_consts[128], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[52];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_watchfiles$main$$$class__1_Change_18;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 18;
            tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 18;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_30 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_watchfiles$main$$$class__1_Change_18);
        locals_watchfiles$main$$$class__1_Change_18 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals_watchfiles$main$$$class__1_Change_18);
        locals_watchfiles$main$$$class__1_Change_18 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 18;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_30);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_5;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_5);
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        tmp_dict_key_2 = mod_consts[27];
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 55;
        tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        if (tmp_dict_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_1 = _PyDict_NewPresized( 11 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[13];
        tmp_dict_value_2 = mod_consts[130];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[14];
        tmp_dict_value_2 = mod_consts[131];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[16];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[15];
        tmp_dict_value_2 = mod_consts[132];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[18];
        tmp_dict_value_2 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[6];
        tmp_dict_value_2 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[22];
        tmp_dict_value_2 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[3];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[7];
        tmp_dict_value_2 = mod_consts[133];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[8];
        tmp_dict_value_2 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[27];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[134], "li");
        tmp_subscript_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_subscript_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_dict_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_1);

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_7;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_9;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[13];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[14];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[16];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_5 = mod_consts[135];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_5);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[15];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[18];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[6];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[22];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[3];
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_6 = (PyObject *)&PyBool_Type;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_6);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[7];
            tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[8];
            tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[5];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_6);
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_7);
            Py_DECREF(tmp_subscript_value_7);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[124];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[96]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_subscript_value_9 == NULL)) {
                tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_subscript_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_9);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_8, 2, tmp_tuple_element_7);
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_8);
            Py_DECREF(tmp_subscript_value_8);
            if (tmp_dict_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_33 = MAKE_FUNCTION_watchfiles$main$$$function__3_watch(tmp_kw_defaults_1, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_list_element_1;
        tmp_dict_key_4 = mod_consts[27];
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame.f_lineno = 139;
        tmp_dict_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
        if (tmp_dict_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_kw_defaults_2 = _PyDict_NewPresized( 11 );
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[13];
        tmp_dict_value_4 = mod_consts[130];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[14];
        tmp_dict_value_4 = mod_consts[131];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[16];
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[15];
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[18];
        tmp_dict_value_4 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[6];
        tmp_dict_value_4 = Py_False;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[22];
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[3];
        tmp_dict_value_4 = Py_None;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[7];
        tmp_dict_value_4 = mod_consts[133];
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[8];
        tmp_dict_value_4 = Py_True;
        tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[27];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_list_element_1 == NULL)) {
            tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM0(tmp_tuple_element_8, 0, tmp_list_element_1);
        tmp_list_element_1 = (PyObject *)&PyUnicode_Type;
        PyList_SET_ITEM0(tmp_tuple_element_8, 1, tmp_list_element_1);
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = (PyObject *)&PyBool_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_8);
        tmp_subscript_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_subscript_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_dict_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_defaults_2);

            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_17;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_13;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_14;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_18;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[13];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[14];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[16];
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_12 = mod_consts[136];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_12);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[15];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_13 = (PyObject *)&PyLong_Type;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_13);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[18];
            tmp_dict_value_5 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[6];
            tmp_dict_value_5 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[22];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_14 = (PyObject *)&PyBool_Type;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_14);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[3];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_15 = (PyObject *)&PyBool_Type;
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_15);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[7];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[8];
            tmp_dict_value_5 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[5];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[100]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[92]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[92]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_9);
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_16);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[124];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[94]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_2;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_subscript_value_18 == NULL)) {
                tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_subscript_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_18);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = Py_None;
            PyTuple_SET_ITEM0(tmp_subscript_value_17, 1, tmp_tuple_element_10);
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_17);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_34 = MAKE_FUNCTION_watchfiles$main$$$function__4_awatch(tmp_kw_defaults_2, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_20;
        tmp_dict_key_6 = mod_consts[48];
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = mod_consts[137];
        tmp_subscript_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_20);
        if (tmp_subscript_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_dict_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_26;
            PyObject *tmp_subscript_value_21;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_list_element_2;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_23;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[27];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_3;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[95]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_3;
            }
            tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_list_element_2 == NULL)) {
                tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
            }

            if (tmp_list_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_3;
            }
            tmp_tuple_element_11 = MAKE_LIST_EMPTY(2);
            PyList_SET_ITEM0(tmp_tuple_element_11, 0, tmp_list_element_2);
            tmp_list_element_2 = (PyObject *)&PyUnicode_Type;
            PyList_SET_ITEM0(tmp_tuple_element_11, 1, tmp_list_element_2);
            tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = (PyObject *)&PyBool_Type;
            PyTuple_SET_ITEM0(tmp_subscript_value_22, 1, tmp_tuple_element_11);
            tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_22);
            Py_DECREF(tmp_subscript_value_22);
            if (tmp_subscript_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_3;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_21);
            Py_DECREF(tmp_subscript_value_21);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[124];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[98]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[129]);

            if (unlikely(tmp_subscript_value_23 == NULL)) {
                tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
            }

            if (tmp_subscript_value_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_3;
            }
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_23);
            if (tmp_dict_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_35 = MAKE_FUNCTION_watchfiles$main$$$function__5__prep_changes(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_24;
        tmp_dict_key_7 = mod_consts[138];
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_subscript_value_24 == NULL)) {
            tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_subscript_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_24);
        if (tmp_dict_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[124];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_36 = MAKE_FUNCTION_watchfiles$main$$$function__6__log_changes(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_subscript_value_25;
        tmp_dict_key_8 = mod_consts[17];
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = (PyObject *)&PyLong_Type;
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_25);
        if (tmp_dict_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[124];
        tmp_dict_value_8 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_assign_source_37 = MAKE_FUNCTION_watchfiles$main$$$function__7__calc_async_timeout(tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_26;
        tmp_dict_key_9 = mod_consts[3];
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = (PyObject *)&PyBool_Type;
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_26);
        if (tmp_dict_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[124];
        tmp_dict_value_9 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_assign_source_38 = MAKE_FUNCTION_watchfiles$main$$$function__8__default_force_polling(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_38);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1d4fe37fa9d63b0edf051df5ee828c43, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1d4fe37fa9d63b0edf051df5ee828c43->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1d4fe37fa9d63b0edf051df5ee828c43, exception_lineno);
    }



    assertFrameObject(frame_1d4fe37fa9d63b0edf051df5ee828c43);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_annotations_8;
        tmp_annotations_8 = DICT_COPY(mod_consts[139]);


        tmp_assign_source_39 = MAKE_FUNCTION_watchfiles$main$$$function__9__auto_force_polling(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_watchfiles$main, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_39);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("watchfiles.main", false);

    Py_INCREF(module_watchfiles$main);
    return module_watchfiles$main;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_watchfiles$main, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("watchfiles$main", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
