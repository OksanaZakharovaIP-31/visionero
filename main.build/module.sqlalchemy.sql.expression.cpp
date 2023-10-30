/* Generated code for Python module 'sqlalchemy.sql.expression'
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

/* The "module_sqlalchemy$sql$expression" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sqlalchemy$sql$expression;
PyDictObject *moduledict_sqlalchemy$sql$expression;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[328];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[328];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("sqlalchemy.sql.expression"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 328; i++) {
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
void checkModuleConstants_sqlalchemy$sql$expression(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 328; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_526497d721b75e13a8dd38bc0ff8320a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[325]); CHECK_OBJECT(module_filename_obj);
    codeobj_526497d721b75e13a8dd38bc0ff8320a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[326], mod_consts[326], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

function_impl_code functable_sqlalchemy$sql$expression[] = {

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

    function_impl_code *current = functable_sqlalchemy$sql$expression;
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

    if (offset > sizeof(functable_sqlalchemy$sql$expression) || offset < 0) {
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
        functable_sqlalchemy$sql$expression[offset],
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
        module_sqlalchemy$sql$expression,
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
PyObject *modulecode_sqlalchemy$sql$expression(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("sqlalchemy.sql.expression");

    // Store the module for future use.
    module_sqlalchemy$sql$expression = module;

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
        PRINT_STRING("sqlalchemy.sql.expression: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("sqlalchemy.sql.expression: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initsqlalchemy$sql$expression\n");

    moduledict_sqlalchemy$sql$expression = MODULE_DICT(module_sqlalchemy$sql$expression);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_sqlalchemy$sql$expression,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$expression,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[327]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_sqlalchemy$sql$expression,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$expression,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_sqlalchemy$sql$expression,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_sqlalchemy$sql$expression);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_sqlalchemy$sql$expression);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_526497d721b75e13a8dd38bc0ff8320a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    frame_526497d721b75e13a8dd38bc0ff8320a = MAKE_MODULE_FRAME(codeobj_526497d721b75e13a8dd38bc0ff8320a, module_sqlalchemy$sql$expression);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_526497d721b75e13a8dd38bc0ff8320a);
    assert(Py_REFCNT(frame_526497d721b75e13a8dd38bc0ff8320a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[7]);
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[9];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[10];
        tmp_level_value_1 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 95;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[12],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[12]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[9];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[14];
        tmp_level_value_2 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 96;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[15],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[9];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[16];
        tmp_level_value_3 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 97;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[17],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[9];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[18];
        tmp_level_value_4 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 98;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[19],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[19]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[9];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[20];
        tmp_level_value_5 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 99;
        tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[21],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[21]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[22];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[23];
        tmp_level_value_6 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 100;
        tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[24],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[22];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[25];
        tmp_level_value_7 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 101;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[26],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[26]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[22];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[27];
        tmp_level_value_8 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 102;
        tmp_import_name_from_8 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[28],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[22];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[29];
        tmp_level_value_9 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 103;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[30],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[30]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[22];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[31];
        tmp_level_value_10 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 104;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[32],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[32]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[33];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[34];
        tmp_level_value_11 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 105;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[35],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[35]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[33];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[36];
        tmp_level_value_12 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 106;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[37],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[37]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[33];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[38];
        tmp_level_value_13 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 107;
        tmp_import_name_from_13 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_13,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[39],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[39]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[33];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[40];
        tmp_level_value_14 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 108;
        tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_14,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[41],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[41]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[33];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[42];
        tmp_level_value_15 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 109;
        tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_15,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[43],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[43]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[33];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[44];
        tmp_level_value_16 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 110;
        tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_16,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[45],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[33];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[46];
        tmp_level_value_17 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 111;
        tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_17,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[47],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[33];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[48];
        tmp_level_value_18 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 112;
        tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_import_name_from_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_18,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[49],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[33];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[50];
        tmp_level_value_19 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 113;
        tmp_import_name_from_19 = IMPORT_MODULE5(tstate, tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_19,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[51],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[51]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[33];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[52];
        tmp_level_value_20 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 114;
        tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_20,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[53],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[53]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[33];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[54];
        tmp_level_value_21 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 115;
        tmp_import_name_from_21 = IMPORT_MODULE5(tstate, tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_21,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[55],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[33];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[56];
        tmp_level_value_22 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 116;
        tmp_import_name_from_22 = IMPORT_MODULE5(tstate, tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_22,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[57],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[57]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[33];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[58];
        tmp_level_value_23 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 117;
        tmp_import_name_from_23 = IMPORT_MODULE5(tstate, tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_23,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[59],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[33];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[60];
        tmp_level_value_24 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 118;
        tmp_import_name_from_24 = IMPORT_MODULE5(tstate, tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_24,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[61],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[33];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[62];
        tmp_level_value_25 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 119;
        tmp_import_name_from_25 = IMPORT_MODULE5(tstate, tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_25,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[63],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[63]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[33];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[64];
        tmp_level_value_26 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 120;
        tmp_import_name_from_26 = IMPORT_MODULE5(tstate, tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_26,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[65],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[33];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = mod_consts[66];
        tmp_level_value_27 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 121;
        tmp_import_name_from_27 = IMPORT_MODULE5(tstate, tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_import_name_from_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_27,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[67],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[33];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = mod_consts[68];
        tmp_level_value_28 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 122;
        tmp_import_name_from_28 = IMPORT_MODULE5(tstate, tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_import_name_from_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_28,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[69],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[69]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[33];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = mod_consts[70];
        tmp_level_value_29 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 123;
        tmp_import_name_from_29 = IMPORT_MODULE5(tstate, tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_import_name_from_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_29,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[71],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[33];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = mod_consts[72];
        tmp_level_value_30 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 124;
        tmp_import_name_from_30 = IMPORT_MODULE5(tstate, tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_import_name_from_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_30,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[73],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[73]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[33];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = mod_consts[74];
        tmp_level_value_31 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 125;
        tmp_import_name_from_31 = IMPORT_MODULE5(tstate, tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_import_name_from_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_31,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[75],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[75]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[33];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = mod_consts[76];
        tmp_level_value_32 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 126;
        tmp_import_name_from_32 = IMPORT_MODULE5(tstate, tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_import_name_from_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_32,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[77],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[77]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[33];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = mod_consts[78];
        tmp_level_value_33 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 127;
        tmp_import_name_from_33 = IMPORT_MODULE5(tstate, tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_import_name_from_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_33,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[79],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[79]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[33];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = mod_consts[80];
        tmp_level_value_34 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 128;
        tmp_import_name_from_34 = IMPORT_MODULE5(tstate, tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_import_name_from_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_34,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[81],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[33];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = mod_consts[82];
        tmp_level_value_35 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 129;
        tmp_import_name_from_35 = IMPORT_MODULE5(tstate, tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_import_name_from_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_35,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[83],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[83]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[33];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = mod_consts[84];
        tmp_level_value_36 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 130;
        tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_import_name_from_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_36,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[85],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[85]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_37;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[33];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = mod_consts[86];
        tmp_level_value_37 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 131;
        tmp_import_name_from_37 = IMPORT_MODULE5(tstate, tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_import_name_from_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_37,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[87],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_37);
        if (tmp_assign_source_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_38;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[33];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = mod_consts[88];
        tmp_level_value_38 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 132;
        tmp_import_name_from_38 = IMPORT_MODULE5(tstate, tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_import_name_from_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_38,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[89],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts[89]);
        }

        Py_DECREF(tmp_import_name_from_38);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[33];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = mod_consts[90];
        tmp_level_value_39 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 133;
        tmp_import_name_from_39 = IMPORT_MODULE5(tstate, tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_import_name_from_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_39,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[91],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts[91]);
        }

        Py_DECREF(tmp_import_name_from_39);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[33];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = mod_consts[92];
        tmp_level_value_40 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 134;
        tmp_import_name_from_40 = IMPORT_MODULE5(tstate, tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_import_name_from_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_40,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[93],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[33];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[94];
        tmp_level_value_41 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 135;
        tmp_import_name_from_41 = IMPORT_MODULE5(tstate, tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_import_name_from_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_41,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[95],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_42;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_42 = mod_consts[33];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[96];
        tmp_level_value_42 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 136;
        tmp_import_name_from_42 = IMPORT_MODULE5(tstate, tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_import_name_from_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_42,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[97],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts[97]);
        }

        Py_DECREF(tmp_import_name_from_42);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_43;
        PyObject *tmp_name_value_43;
        PyObject *tmp_globals_arg_value_43;
        PyObject *tmp_locals_arg_value_43;
        PyObject *tmp_fromlist_value_43;
        PyObject *tmp_level_value_43;
        tmp_name_value_43 = mod_consts[33];
        tmp_globals_arg_value_43 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_43 = Py_None;
        tmp_fromlist_value_43 = mod_consts[98];
        tmp_level_value_43 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 137;
        tmp_import_name_from_43 = IMPORT_MODULE5(tstate, tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
        if (tmp_import_name_from_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_43,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[99],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts[99]);
        }

        Py_DECREF(tmp_import_name_from_43);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_44;
        PyObject *tmp_name_value_44;
        PyObject *tmp_globals_arg_value_44;
        PyObject *tmp_locals_arg_value_44;
        PyObject *tmp_fromlist_value_44;
        PyObject *tmp_level_value_44;
        tmp_name_value_44 = mod_consts[33];
        tmp_globals_arg_value_44 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_44 = Py_None;
        tmp_fromlist_value_44 = mod_consts[100];
        tmp_level_value_44 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 138;
        tmp_import_name_from_44 = IMPORT_MODULE5(tstate, tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
        if (tmp_import_name_from_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_44,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[101],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_44);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_value_45;
        PyObject *tmp_globals_arg_value_45;
        PyObject *tmp_locals_arg_value_45;
        PyObject *tmp_fromlist_value_45;
        PyObject *tmp_level_value_45;
        tmp_name_value_45 = mod_consts[33];
        tmp_globals_arg_value_45 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_45 = Py_None;
        tmp_fromlist_value_45 = mod_consts[102];
        tmp_level_value_45 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 139;
        tmp_import_name_from_45 = IMPORT_MODULE5(tstate, tmp_name_value_45, tmp_globals_arg_value_45, tmp_locals_arg_value_45, tmp_fromlist_value_45, tmp_level_value_45);
        if (tmp_import_name_from_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_45,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[103],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts[103]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_46;
        PyObject *tmp_name_value_46;
        PyObject *tmp_globals_arg_value_46;
        PyObject *tmp_locals_arg_value_46;
        PyObject *tmp_fromlist_value_46;
        PyObject *tmp_level_value_46;
        tmp_name_value_46 = mod_consts[104];
        tmp_globals_arg_value_46 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_46 = Py_None;
        tmp_fromlist_value_46 = mod_consts[105];
        tmp_level_value_46 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 140;
        tmp_import_name_from_46 = IMPORT_MODULE5(tstate, tmp_name_value_46, tmp_globals_arg_value_46, tmp_locals_arg_value_46, tmp_fromlist_value_46, tmp_level_value_46);
        if (tmp_import_name_from_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_46,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[106],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts[106]);
        }

        Py_DECREF(tmp_import_name_from_46);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_import_name_from_47;
        PyObject *tmp_name_value_47;
        PyObject *tmp_globals_arg_value_47;
        PyObject *tmp_locals_arg_value_47;
        PyObject *tmp_fromlist_value_47;
        PyObject *tmp_level_value_47;
        tmp_name_value_47 = mod_consts[104];
        tmp_globals_arg_value_47 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_47 = Py_None;
        tmp_fromlist_value_47 = mod_consts[107];
        tmp_level_value_47 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 141;
        tmp_import_name_from_47 = IMPORT_MODULE5(tstate, tmp_name_value_47, tmp_globals_arg_value_47, tmp_locals_arg_value_47, tmp_fromlist_value_47, tmp_level_value_47);
        if (tmp_import_name_from_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_51 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_47,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[108],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_51 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts[108]);
        }

        Py_DECREF(tmp_import_name_from_47);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_48;
        PyObject *tmp_name_value_48;
        PyObject *tmp_globals_arg_value_48;
        PyObject *tmp_locals_arg_value_48;
        PyObject *tmp_fromlist_value_48;
        PyObject *tmp_level_value_48;
        tmp_name_value_48 = mod_consts[104];
        tmp_globals_arg_value_48 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_48 = Py_None;
        tmp_fromlist_value_48 = mod_consts[109];
        tmp_level_value_48 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 142;
        tmp_import_name_from_48 = IMPORT_MODULE5(tstate, tmp_name_value_48, tmp_globals_arg_value_48, tmp_locals_arg_value_48, tmp_fromlist_value_48, tmp_level_value_48);
        if (tmp_import_name_from_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_48,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[110],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts[110]);
        }

        Py_DECREF(tmp_import_name_from_48);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_49;
        PyObject *tmp_name_value_49;
        PyObject *tmp_globals_arg_value_49;
        PyObject *tmp_locals_arg_value_49;
        PyObject *tmp_fromlist_value_49;
        PyObject *tmp_level_value_49;
        tmp_name_value_49 = mod_consts[104];
        tmp_globals_arg_value_49 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_49 = Py_None;
        tmp_fromlist_value_49 = mod_consts[111];
        tmp_level_value_49 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 143;
        tmp_import_name_from_49 = IMPORT_MODULE5(tstate, tmp_name_value_49, tmp_globals_arg_value_49, tmp_locals_arg_value_49, tmp_fromlist_value_49, tmp_level_value_49);
        if (tmp_import_name_from_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_49,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[112],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts[112]);
        }

        Py_DECREF(tmp_import_name_from_49);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_50;
        PyObject *tmp_name_value_50;
        PyObject *tmp_globals_arg_value_50;
        PyObject *tmp_locals_arg_value_50;
        PyObject *tmp_fromlist_value_50;
        PyObject *tmp_level_value_50;
        tmp_name_value_50 = mod_consts[113];
        tmp_globals_arg_value_50 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_50 = Py_None;
        tmp_fromlist_value_50 = mod_consts[114];
        tmp_level_value_50 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 144;
        tmp_import_name_from_50 = IMPORT_MODULE5(tstate, tmp_name_value_50, tmp_globals_arg_value_50, tmp_locals_arg_value_50, tmp_fromlist_value_50, tmp_level_value_50);
        if (tmp_import_name_from_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_50)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_50,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[115],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_50);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_51;
        PyObject *tmp_name_value_51;
        PyObject *tmp_globals_arg_value_51;
        PyObject *tmp_locals_arg_value_51;
        PyObject *tmp_fromlist_value_51;
        PyObject *tmp_level_value_51;
        tmp_name_value_51 = mod_consts[113];
        tmp_globals_arg_value_51 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_51 = Py_None;
        tmp_fromlist_value_51 = mod_consts[116];
        tmp_level_value_51 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 145;
        tmp_import_name_from_51 = IMPORT_MODULE5(tstate, tmp_name_value_51, tmp_globals_arg_value_51, tmp_locals_arg_value_51, tmp_fromlist_value_51, tmp_level_value_51);
        if (tmp_import_name_from_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_51)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_51,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[117],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts[117]);
        }

        Py_DECREF(tmp_import_name_from_51);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_52;
        PyObject *tmp_name_value_52;
        PyObject *tmp_globals_arg_value_52;
        PyObject *tmp_locals_arg_value_52;
        PyObject *tmp_fromlist_value_52;
        PyObject *tmp_level_value_52;
        tmp_name_value_52 = mod_consts[113];
        tmp_globals_arg_value_52 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_52 = Py_None;
        tmp_fromlist_value_52 = mod_consts[118];
        tmp_level_value_52 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 146;
        tmp_import_name_from_52 = IMPORT_MODULE5(tstate, tmp_name_value_52, tmp_globals_arg_value_52, tmp_locals_arg_value_52, tmp_fromlist_value_52, tmp_level_value_52);
        if (tmp_import_name_from_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_52)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_52,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[119],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts[119]);
        }

        Py_DECREF(tmp_import_name_from_52);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_53;
        PyObject *tmp_name_value_53;
        PyObject *tmp_globals_arg_value_53;
        PyObject *tmp_locals_arg_value_53;
        PyObject *tmp_fromlist_value_53;
        PyObject *tmp_level_value_53;
        tmp_name_value_53 = mod_consts[120];
        tmp_globals_arg_value_53 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_53 = Py_None;
        tmp_fromlist_value_53 = mod_consts[121];
        tmp_level_value_53 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 147;
        tmp_import_name_from_53 = IMPORT_MODULE5(tstate, tmp_name_value_53, tmp_globals_arg_value_53, tmp_locals_arg_value_53, tmp_fromlist_value_53, tmp_level_value_53);
        if (tmp_import_name_from_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_53)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_53,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[122],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts[122]);
        }

        Py_DECREF(tmp_import_name_from_53);
        if (tmp_assign_source_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_54;
        PyObject *tmp_name_value_54;
        PyObject *tmp_globals_arg_value_54;
        PyObject *tmp_locals_arg_value_54;
        PyObject *tmp_fromlist_value_54;
        PyObject *tmp_level_value_54;
        tmp_name_value_54 = mod_consts[120];
        tmp_globals_arg_value_54 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_54 = Py_None;
        tmp_fromlist_value_54 = mod_consts[123];
        tmp_level_value_54 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 148;
        tmp_import_name_from_54 = IMPORT_MODULE5(tstate, tmp_name_value_54, tmp_globals_arg_value_54, tmp_locals_arg_value_54, tmp_fromlist_value_54, tmp_level_value_54);
        if (tmp_import_name_from_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_54)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_54,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[124],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts[124]);
        }

        Py_DECREF(tmp_import_name_from_54);
        if (tmp_assign_source_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_55;
        PyObject *tmp_name_value_55;
        PyObject *tmp_globals_arg_value_55;
        PyObject *tmp_locals_arg_value_55;
        PyObject *tmp_fromlist_value_55;
        PyObject *tmp_level_value_55;
        tmp_name_value_55 = mod_consts[120];
        tmp_globals_arg_value_55 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_55 = Py_None;
        tmp_fromlist_value_55 = mod_consts[125];
        tmp_level_value_55 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 149;
        tmp_import_name_from_55 = IMPORT_MODULE5(tstate, tmp_name_value_55, tmp_globals_arg_value_55, tmp_locals_arg_value_55, tmp_fromlist_value_55, tmp_level_value_55);
        if (tmp_import_name_from_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_55)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_55,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[126],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts[126]);
        }

        Py_DECREF(tmp_import_name_from_55);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_56;
        PyObject *tmp_name_value_56;
        PyObject *tmp_globals_arg_value_56;
        PyObject *tmp_locals_arg_value_56;
        PyObject *tmp_fromlist_value_56;
        PyObject *tmp_level_value_56;
        tmp_name_value_56 = mod_consts[127];
        tmp_globals_arg_value_56 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_56 = Py_None;
        tmp_fromlist_value_56 = mod_consts[128];
        tmp_level_value_56 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 150;
        tmp_import_name_from_56 = IMPORT_MODULE5(tstate, tmp_name_value_56, tmp_globals_arg_value_56, tmp_locals_arg_value_56, tmp_fromlist_value_56, tmp_level_value_56);
        if (tmp_import_name_from_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_56)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_56,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[129],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts[129]);
        }

        Py_DECREF(tmp_import_name_from_56);
        if (tmp_assign_source_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_import_name_from_57;
        PyObject *tmp_name_value_57;
        PyObject *tmp_globals_arg_value_57;
        PyObject *tmp_locals_arg_value_57;
        PyObject *tmp_fromlist_value_57;
        PyObject *tmp_level_value_57;
        tmp_name_value_57 = mod_consts[127];
        tmp_globals_arg_value_57 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_57 = Py_None;
        tmp_fromlist_value_57 = mod_consts[130];
        tmp_level_value_57 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 151;
        tmp_import_name_from_57 = IMPORT_MODULE5(tstate, tmp_name_value_57, tmp_globals_arg_value_57, tmp_locals_arg_value_57, tmp_fromlist_value_57, tmp_level_value_57);
        if (tmp_import_name_from_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_57)) {
            tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_57,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[131],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_57);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_import_name_from_58;
        PyObject *tmp_name_value_58;
        PyObject *tmp_globals_arg_value_58;
        PyObject *tmp_locals_arg_value_58;
        PyObject *tmp_fromlist_value_58;
        PyObject *tmp_level_value_58;
        tmp_name_value_58 = mod_consts[127];
        tmp_globals_arg_value_58 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_58 = Py_None;
        tmp_fromlist_value_58 = mod_consts[132];
        tmp_level_value_58 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 152;
        tmp_import_name_from_58 = IMPORT_MODULE5(tstate, tmp_name_value_58, tmp_globals_arg_value_58, tmp_locals_arg_value_58, tmp_fromlist_value_58, tmp_level_value_58);
        if (tmp_import_name_from_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_58)) {
            tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_58,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[133],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_58);
        if (tmp_assign_source_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_import_name_from_59;
        PyObject *tmp_name_value_59;
        PyObject *tmp_globals_arg_value_59;
        PyObject *tmp_locals_arg_value_59;
        PyObject *tmp_fromlist_value_59;
        PyObject *tmp_level_value_59;
        tmp_name_value_59 = mod_consts[127];
        tmp_globals_arg_value_59 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_59 = Py_None;
        tmp_fromlist_value_59 = mod_consts[134];
        tmp_level_value_59 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 153;
        tmp_import_name_from_59 = IMPORT_MODULE5(tstate, tmp_name_value_59, tmp_globals_arg_value_59, tmp_locals_arg_value_59, tmp_fromlist_value_59, tmp_level_value_59);
        if (tmp_import_name_from_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_59)) {
            tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_59,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[135],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_59);
        if (tmp_assign_source_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_import_name_from_60;
        PyObject *tmp_name_value_60;
        PyObject *tmp_globals_arg_value_60;
        PyObject *tmp_locals_arg_value_60;
        PyObject *tmp_fromlist_value_60;
        PyObject *tmp_level_value_60;
        tmp_name_value_60 = mod_consts[127];
        tmp_globals_arg_value_60 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_60 = Py_None;
        tmp_fromlist_value_60 = mod_consts[136];
        tmp_level_value_60 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 154;
        tmp_import_name_from_60 = IMPORT_MODULE5(tstate, tmp_name_value_60, tmp_globals_arg_value_60, tmp_locals_arg_value_60, tmp_fromlist_value_60, tmp_level_value_60);
        if (tmp_import_name_from_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_60)) {
            tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_60,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[137],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts[137]);
        }

        Py_DECREF(tmp_import_name_from_60);
        if (tmp_assign_source_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_import_name_from_61;
        PyObject *tmp_name_value_61;
        PyObject *tmp_globals_arg_value_61;
        PyObject *tmp_locals_arg_value_61;
        PyObject *tmp_fromlist_value_61;
        PyObject *tmp_level_value_61;
        tmp_name_value_61 = mod_consts[127];
        tmp_globals_arg_value_61 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_61 = Py_None;
        tmp_fromlist_value_61 = mod_consts[138];
        tmp_level_value_61 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 155;
        tmp_import_name_from_61 = IMPORT_MODULE5(tstate, tmp_name_value_61, tmp_globals_arg_value_61, tmp_locals_arg_value_61, tmp_fromlist_value_61, tmp_level_value_61);
        if (tmp_import_name_from_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_61)) {
            tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_61,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[139],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_61);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_import_name_from_62;
        PyObject *tmp_name_value_62;
        PyObject *tmp_globals_arg_value_62;
        PyObject *tmp_locals_arg_value_62;
        PyObject *tmp_fromlist_value_62;
        PyObject *tmp_level_value_62;
        tmp_name_value_62 = mod_consts[127];
        tmp_globals_arg_value_62 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_62 = Py_None;
        tmp_fromlist_value_62 = mod_consts[140];
        tmp_level_value_62 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 156;
        tmp_import_name_from_62 = IMPORT_MODULE5(tstate, tmp_name_value_62, tmp_globals_arg_value_62, tmp_locals_arg_value_62, tmp_fromlist_value_62, tmp_level_value_62);
        if (tmp_import_name_from_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_62)) {
            tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_62,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[141],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts[141]);
        }

        Py_DECREF(tmp_import_name_from_62);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_import_name_from_63;
        PyObject *tmp_name_value_63;
        PyObject *tmp_globals_arg_value_63;
        PyObject *tmp_locals_arg_value_63;
        PyObject *tmp_fromlist_value_63;
        PyObject *tmp_level_value_63;
        tmp_name_value_63 = mod_consts[127];
        tmp_globals_arg_value_63 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_63 = Py_None;
        tmp_fromlist_value_63 = mod_consts[142];
        tmp_level_value_63 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 157;
        tmp_import_name_from_63 = IMPORT_MODULE5(tstate, tmp_name_value_63, tmp_globals_arg_value_63, tmp_locals_arg_value_63, tmp_fromlist_value_63, tmp_level_value_63);
        if (tmp_import_name_from_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_63)) {
            tmp_assign_source_67 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_63,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[143],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_67 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts[143]);
        }

        Py_DECREF(tmp_import_name_from_63);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_import_name_from_64;
        PyObject *tmp_name_value_64;
        PyObject *tmp_globals_arg_value_64;
        PyObject *tmp_locals_arg_value_64;
        PyObject *tmp_fromlist_value_64;
        PyObject *tmp_level_value_64;
        tmp_name_value_64 = mod_consts[127];
        tmp_globals_arg_value_64 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_64 = Py_None;
        tmp_fromlist_value_64 = mod_consts[144];
        tmp_level_value_64 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 158;
        tmp_import_name_from_64 = IMPORT_MODULE5(tstate, tmp_name_value_64, tmp_globals_arg_value_64, tmp_locals_arg_value_64, tmp_fromlist_value_64, tmp_level_value_64);
        if (tmp_import_name_from_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_64)) {
            tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_64,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[145],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_64);
        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_import_name_from_65;
        PyObject *tmp_name_value_65;
        PyObject *tmp_globals_arg_value_65;
        PyObject *tmp_locals_arg_value_65;
        PyObject *tmp_fromlist_value_65;
        PyObject *tmp_level_value_65;
        tmp_name_value_65 = mod_consts[127];
        tmp_globals_arg_value_65 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_65 = Py_None;
        tmp_fromlist_value_65 = mod_consts[146];
        tmp_level_value_65 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 159;
        tmp_import_name_from_65 = IMPORT_MODULE5(tstate, tmp_name_value_65, tmp_globals_arg_value_65, tmp_locals_arg_value_65, tmp_fromlist_value_65, tmp_level_value_65);
        if (tmp_import_name_from_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_65)) {
            tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_65,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[147],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts[147]);
        }

        Py_DECREF(tmp_import_name_from_65);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_import_name_from_66;
        PyObject *tmp_name_value_66;
        PyObject *tmp_globals_arg_value_66;
        PyObject *tmp_locals_arg_value_66;
        PyObject *tmp_fromlist_value_66;
        PyObject *tmp_level_value_66;
        tmp_name_value_66 = mod_consts[127];
        tmp_globals_arg_value_66 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_66 = Py_None;
        tmp_fromlist_value_66 = mod_consts[148];
        tmp_level_value_66 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 160;
        tmp_import_name_from_66 = IMPORT_MODULE5(tstate, tmp_name_value_66, tmp_globals_arg_value_66, tmp_locals_arg_value_66, tmp_fromlist_value_66, tmp_level_value_66);
        if (tmp_import_name_from_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_66)) {
            tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_66,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[149],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts[149]);
        }

        Py_DECREF(tmp_import_name_from_66);
        if (tmp_assign_source_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_import_name_from_67;
        PyObject *tmp_name_value_67;
        PyObject *tmp_globals_arg_value_67;
        PyObject *tmp_locals_arg_value_67;
        PyObject *tmp_fromlist_value_67;
        PyObject *tmp_level_value_67;
        tmp_name_value_67 = mod_consts[127];
        tmp_globals_arg_value_67 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_67 = Py_None;
        tmp_fromlist_value_67 = mod_consts[150];
        tmp_level_value_67 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 161;
        tmp_import_name_from_67 = IMPORT_MODULE5(tstate, tmp_name_value_67, tmp_globals_arg_value_67, tmp_locals_arg_value_67, tmp_fromlist_value_67, tmp_level_value_67);
        if (tmp_import_name_from_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_67)) {
            tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_67,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[151],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts[151]);
        }

        Py_DECREF(tmp_import_name_from_67);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_import_name_from_68;
        PyObject *tmp_name_value_68;
        PyObject *tmp_globals_arg_value_68;
        PyObject *tmp_locals_arg_value_68;
        PyObject *tmp_fromlist_value_68;
        PyObject *tmp_level_value_68;
        tmp_name_value_68 = mod_consts[127];
        tmp_globals_arg_value_68 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_68 = Py_None;
        tmp_fromlist_value_68 = mod_consts[152];
        tmp_level_value_68 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 162;
        tmp_import_name_from_68 = IMPORT_MODULE5(tstate, tmp_name_value_68, tmp_globals_arg_value_68, tmp_locals_arg_value_68, tmp_fromlist_value_68, tmp_level_value_68);
        if (tmp_import_name_from_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_68)) {
            tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_68,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[153],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts[153]);
        }

        Py_DECREF(tmp_import_name_from_68);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_import_name_from_69;
        PyObject *tmp_name_value_69;
        PyObject *tmp_globals_arg_value_69;
        PyObject *tmp_locals_arg_value_69;
        PyObject *tmp_fromlist_value_69;
        PyObject *tmp_level_value_69;
        tmp_name_value_69 = mod_consts[127];
        tmp_globals_arg_value_69 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_69 = Py_None;
        tmp_fromlist_value_69 = mod_consts[154];
        tmp_level_value_69 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 163;
        tmp_import_name_from_69 = IMPORT_MODULE5(tstate, tmp_name_value_69, tmp_globals_arg_value_69, tmp_locals_arg_value_69, tmp_fromlist_value_69, tmp_level_value_69);
        if (tmp_import_name_from_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_69)) {
            tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_69,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[155],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts[155]);
        }

        Py_DECREF(tmp_import_name_from_69);
        if (tmp_assign_source_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_import_name_from_70;
        PyObject *tmp_name_value_70;
        PyObject *tmp_globals_arg_value_70;
        PyObject *tmp_locals_arg_value_70;
        PyObject *tmp_fromlist_value_70;
        PyObject *tmp_level_value_70;
        tmp_name_value_70 = mod_consts[127];
        tmp_globals_arg_value_70 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_70 = Py_None;
        tmp_fromlist_value_70 = mod_consts[156];
        tmp_level_value_70 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 164;
        tmp_import_name_from_70 = IMPORT_MODULE5(tstate, tmp_name_value_70, tmp_globals_arg_value_70, tmp_locals_arg_value_70, tmp_fromlist_value_70, tmp_level_value_70);
        if (tmp_import_name_from_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_70)) {
            tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_70,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[157],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts[157]);
        }

        Py_DECREF(tmp_import_name_from_70);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_import_name_from_71;
        PyObject *tmp_name_value_71;
        PyObject *tmp_globals_arg_value_71;
        PyObject *tmp_locals_arg_value_71;
        PyObject *tmp_fromlist_value_71;
        PyObject *tmp_level_value_71;
        tmp_name_value_71 = mod_consts[127];
        tmp_globals_arg_value_71 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_71 = Py_None;
        tmp_fromlist_value_71 = mod_consts[158];
        tmp_level_value_71 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 165;
        tmp_import_name_from_71 = IMPORT_MODULE5(tstate, tmp_name_value_71, tmp_globals_arg_value_71, tmp_locals_arg_value_71, tmp_fromlist_value_71, tmp_level_value_71);
        if (tmp_import_name_from_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_71)) {
            tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_71,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[159],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts[159]);
        }

        Py_DECREF(tmp_import_name_from_71);
        if (tmp_assign_source_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_import_name_from_72;
        PyObject *tmp_name_value_72;
        PyObject *tmp_globals_arg_value_72;
        PyObject *tmp_locals_arg_value_72;
        PyObject *tmp_fromlist_value_72;
        PyObject *tmp_level_value_72;
        tmp_name_value_72 = mod_consts[127];
        tmp_globals_arg_value_72 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_72 = Py_None;
        tmp_fromlist_value_72 = mod_consts[160];
        tmp_level_value_72 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 166;
        tmp_import_name_from_72 = IMPORT_MODULE5(tstate, tmp_name_value_72, tmp_globals_arg_value_72, tmp_locals_arg_value_72, tmp_fromlist_value_72, tmp_level_value_72);
        if (tmp_import_name_from_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_72)) {
            tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_72,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[161],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts[161]);
        }

        Py_DECREF(tmp_import_name_from_72);
        if (tmp_assign_source_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_import_name_from_73;
        PyObject *tmp_name_value_73;
        PyObject *tmp_globals_arg_value_73;
        PyObject *tmp_locals_arg_value_73;
        PyObject *tmp_fromlist_value_73;
        PyObject *tmp_level_value_73;
        tmp_name_value_73 = mod_consts[127];
        tmp_globals_arg_value_73 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_73 = Py_None;
        tmp_fromlist_value_73 = mod_consts[162];
        tmp_level_value_73 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 167;
        tmp_import_name_from_73 = IMPORT_MODULE5(tstate, tmp_name_value_73, tmp_globals_arg_value_73, tmp_locals_arg_value_73, tmp_fromlist_value_73, tmp_level_value_73);
        if (tmp_import_name_from_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_73)) {
            tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_73,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[163],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts[163]);
        }

        Py_DECREF(tmp_import_name_from_73);
        if (tmp_assign_source_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_import_name_from_74;
        PyObject *tmp_name_value_74;
        PyObject *tmp_globals_arg_value_74;
        PyObject *tmp_locals_arg_value_74;
        PyObject *tmp_fromlist_value_74;
        PyObject *tmp_level_value_74;
        tmp_name_value_74 = mod_consts[127];
        tmp_globals_arg_value_74 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_74 = Py_None;
        tmp_fromlist_value_74 = mod_consts[164];
        tmp_level_value_74 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 168;
        tmp_import_name_from_74 = IMPORT_MODULE5(tstate, tmp_name_value_74, tmp_globals_arg_value_74, tmp_locals_arg_value_74, tmp_fromlist_value_74, tmp_level_value_74);
        if (tmp_import_name_from_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_74)) {
            tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_74,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[165],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts[165]);
        }

        Py_DECREF(tmp_import_name_from_74);
        if (tmp_assign_source_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_import_name_from_75;
        PyObject *tmp_name_value_75;
        PyObject *tmp_globals_arg_value_75;
        PyObject *tmp_locals_arg_value_75;
        PyObject *tmp_fromlist_value_75;
        PyObject *tmp_level_value_75;
        tmp_name_value_75 = mod_consts[127];
        tmp_globals_arg_value_75 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_75 = Py_None;
        tmp_fromlist_value_75 = mod_consts[166];
        tmp_level_value_75 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 169;
        tmp_import_name_from_75 = IMPORT_MODULE5(tstate, tmp_name_value_75, tmp_globals_arg_value_75, tmp_locals_arg_value_75, tmp_fromlist_value_75, tmp_level_value_75);
        if (tmp_import_name_from_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_75)) {
            tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_75,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[167],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts[167]);
        }

        Py_DECREF(tmp_import_name_from_75);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_import_name_from_76;
        PyObject *tmp_name_value_76;
        PyObject *tmp_globals_arg_value_76;
        PyObject *tmp_locals_arg_value_76;
        PyObject *tmp_fromlist_value_76;
        PyObject *tmp_level_value_76;
        tmp_name_value_76 = mod_consts[127];
        tmp_globals_arg_value_76 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_76 = Py_None;
        tmp_fromlist_value_76 = mod_consts[168];
        tmp_level_value_76 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 170;
        tmp_import_name_from_76 = IMPORT_MODULE5(tstate, tmp_name_value_76, tmp_globals_arg_value_76, tmp_locals_arg_value_76, tmp_fromlist_value_76, tmp_level_value_76);
        if (tmp_import_name_from_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_76)) {
            tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_76,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[169],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts[169]);
        }

        Py_DECREF(tmp_import_name_from_76);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_import_name_from_77;
        PyObject *tmp_name_value_77;
        PyObject *tmp_globals_arg_value_77;
        PyObject *tmp_locals_arg_value_77;
        PyObject *tmp_fromlist_value_77;
        PyObject *tmp_level_value_77;
        tmp_name_value_77 = mod_consts[127];
        tmp_globals_arg_value_77 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_77 = Py_None;
        tmp_fromlist_value_77 = mod_consts[170];
        tmp_level_value_77 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 171;
        tmp_import_name_from_77 = IMPORT_MODULE5(tstate, tmp_name_value_77, tmp_globals_arg_value_77, tmp_locals_arg_value_77, tmp_fromlist_value_77, tmp_level_value_77);
        if (tmp_import_name_from_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_77)) {
            tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_77,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[171],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts[171]);
        }

        Py_DECREF(tmp_import_name_from_77);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_import_name_from_78;
        PyObject *tmp_name_value_78;
        PyObject *tmp_globals_arg_value_78;
        PyObject *tmp_locals_arg_value_78;
        PyObject *tmp_fromlist_value_78;
        PyObject *tmp_level_value_78;
        tmp_name_value_78 = mod_consts[127];
        tmp_globals_arg_value_78 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_78 = Py_None;
        tmp_fromlist_value_78 = mod_consts[172];
        tmp_level_value_78 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 172;
        tmp_import_name_from_78 = IMPORT_MODULE5(tstate, tmp_name_value_78, tmp_globals_arg_value_78, tmp_locals_arg_value_78, tmp_fromlist_value_78, tmp_level_value_78);
        if (tmp_import_name_from_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_78)) {
            tmp_assign_source_82 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_78,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[173],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_82 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts[173]);
        }

        Py_DECREF(tmp_import_name_from_78);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_import_name_from_79;
        PyObject *tmp_name_value_79;
        PyObject *tmp_globals_arg_value_79;
        PyObject *tmp_locals_arg_value_79;
        PyObject *tmp_fromlist_value_79;
        PyObject *tmp_level_value_79;
        tmp_name_value_79 = mod_consts[127];
        tmp_globals_arg_value_79 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_79 = Py_None;
        tmp_fromlist_value_79 = mod_consts[174];
        tmp_level_value_79 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 173;
        tmp_import_name_from_79 = IMPORT_MODULE5(tstate, tmp_name_value_79, tmp_globals_arg_value_79, tmp_locals_arg_value_79, tmp_fromlist_value_79, tmp_level_value_79);
        if (tmp_import_name_from_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_79)) {
            tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_79,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[175],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts[175]);
        }

        Py_DECREF(tmp_import_name_from_79);
        if (tmp_assign_source_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[175], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_import_name_from_80;
        PyObject *tmp_name_value_80;
        PyObject *tmp_globals_arg_value_80;
        PyObject *tmp_locals_arg_value_80;
        PyObject *tmp_fromlist_value_80;
        PyObject *tmp_level_value_80;
        tmp_name_value_80 = mod_consts[127];
        tmp_globals_arg_value_80 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_80 = Py_None;
        tmp_fromlist_value_80 = mod_consts[176];
        tmp_level_value_80 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 174;
        tmp_import_name_from_80 = IMPORT_MODULE5(tstate, tmp_name_value_80, tmp_globals_arg_value_80, tmp_locals_arg_value_80, tmp_fromlist_value_80, tmp_level_value_80);
        if (tmp_import_name_from_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_80)) {
            tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_80,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[177],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts[177]);
        }

        Py_DECREF(tmp_import_name_from_80);
        if (tmp_assign_source_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_import_name_from_81;
        PyObject *tmp_name_value_81;
        PyObject *tmp_globals_arg_value_81;
        PyObject *tmp_locals_arg_value_81;
        PyObject *tmp_fromlist_value_81;
        PyObject *tmp_level_value_81;
        tmp_name_value_81 = mod_consts[127];
        tmp_globals_arg_value_81 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_81 = Py_None;
        tmp_fromlist_value_81 = mod_consts[178];
        tmp_level_value_81 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 175;
        tmp_import_name_from_81 = IMPORT_MODULE5(tstate, tmp_name_value_81, tmp_globals_arg_value_81, tmp_locals_arg_value_81, tmp_fromlist_value_81, tmp_level_value_81);
        if (tmp_import_name_from_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_81)) {
            tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_81,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[179],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts[179]);
        }

        Py_DECREF(tmp_import_name_from_81);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_import_name_from_82;
        PyObject *tmp_name_value_82;
        PyObject *tmp_globals_arg_value_82;
        PyObject *tmp_locals_arg_value_82;
        PyObject *tmp_fromlist_value_82;
        PyObject *tmp_level_value_82;
        tmp_name_value_82 = mod_consts[127];
        tmp_globals_arg_value_82 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_82 = Py_None;
        tmp_fromlist_value_82 = mod_consts[180];
        tmp_level_value_82 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 176;
        tmp_import_name_from_82 = IMPORT_MODULE5(tstate, tmp_name_value_82, tmp_globals_arg_value_82, tmp_locals_arg_value_82, tmp_fromlist_value_82, tmp_level_value_82);
        if (tmp_import_name_from_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_82)) {
            tmp_assign_source_86 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_82,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[181],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_86 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts[181]);
        }

        Py_DECREF(tmp_import_name_from_82);
        if (tmp_assign_source_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_import_name_from_83;
        PyObject *tmp_name_value_83;
        PyObject *tmp_globals_arg_value_83;
        PyObject *tmp_locals_arg_value_83;
        PyObject *tmp_fromlist_value_83;
        PyObject *tmp_level_value_83;
        tmp_name_value_83 = mod_consts[127];
        tmp_globals_arg_value_83 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_83 = Py_None;
        tmp_fromlist_value_83 = mod_consts[182];
        tmp_level_value_83 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 177;
        tmp_import_name_from_83 = IMPORT_MODULE5(tstate, tmp_name_value_83, tmp_globals_arg_value_83, tmp_locals_arg_value_83, tmp_fromlist_value_83, tmp_level_value_83);
        if (tmp_import_name_from_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_83)) {
            tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_83,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[183],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts[183]);
        }

        Py_DECREF(tmp_import_name_from_83);
        if (tmp_assign_source_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_import_name_from_84;
        PyObject *tmp_name_value_84;
        PyObject *tmp_globals_arg_value_84;
        PyObject *tmp_locals_arg_value_84;
        PyObject *tmp_fromlist_value_84;
        PyObject *tmp_level_value_84;
        tmp_name_value_84 = mod_consts[127];
        tmp_globals_arg_value_84 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_84 = Py_None;
        tmp_fromlist_value_84 = mod_consts[184];
        tmp_level_value_84 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 178;
        tmp_import_name_from_84 = IMPORT_MODULE5(tstate, tmp_name_value_84, tmp_globals_arg_value_84, tmp_locals_arg_value_84, tmp_fromlist_value_84, tmp_level_value_84);
        if (tmp_import_name_from_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_84)) {
            tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_84,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[185],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts[185]);
        }

        Py_DECREF(tmp_import_name_from_84);
        if (tmp_assign_source_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_import_name_from_85;
        PyObject *tmp_name_value_85;
        PyObject *tmp_globals_arg_value_85;
        PyObject *tmp_locals_arg_value_85;
        PyObject *tmp_fromlist_value_85;
        PyObject *tmp_level_value_85;
        tmp_name_value_85 = mod_consts[127];
        tmp_globals_arg_value_85 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_85 = Py_None;
        tmp_fromlist_value_85 = mod_consts[186];
        tmp_level_value_85 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 179;
        tmp_import_name_from_85 = IMPORT_MODULE5(tstate, tmp_name_value_85, tmp_globals_arg_value_85, tmp_locals_arg_value_85, tmp_fromlist_value_85, tmp_level_value_85);
        if (tmp_import_name_from_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_85)) {
            tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_85,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[187],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts[187]);
        }

        Py_DECREF(tmp_import_name_from_85);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_import_name_from_86;
        PyObject *tmp_name_value_86;
        PyObject *tmp_globals_arg_value_86;
        PyObject *tmp_locals_arg_value_86;
        PyObject *tmp_fromlist_value_86;
        PyObject *tmp_level_value_86;
        tmp_name_value_86 = mod_consts[188];
        tmp_globals_arg_value_86 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_86 = Py_None;
        tmp_fromlist_value_86 = mod_consts[189];
        tmp_level_value_86 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 180;
        tmp_import_name_from_86 = IMPORT_MODULE5(tstate, tmp_name_value_86, tmp_globals_arg_value_86, tmp_locals_arg_value_86, tmp_fromlist_value_86, tmp_level_value_86);
        if (tmp_import_name_from_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_86)) {
            tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_86,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[190],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts[190]);
        }

        Py_DECREF(tmp_import_name_from_86);
        if (tmp_assign_source_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_import_name_from_87;
        PyObject *tmp_name_value_87;
        PyObject *tmp_globals_arg_value_87;
        PyObject *tmp_locals_arg_value_87;
        PyObject *tmp_fromlist_value_87;
        PyObject *tmp_level_value_87;
        tmp_name_value_87 = mod_consts[191];
        tmp_globals_arg_value_87 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_87 = Py_None;
        tmp_fromlist_value_87 = mod_consts[192];
        tmp_level_value_87 = mod_consts[11];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 181;
        tmp_import_name_from_87 = IMPORT_MODULE5(tstate, tmp_name_value_87, tmp_globals_arg_value_87, tmp_locals_arg_value_87, tmp_fromlist_value_87, tmp_level_value_87);
        if (tmp_import_name_from_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_87)) {
            tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_87,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[193],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts[193]);
        }

        Py_DECREF(tmp_import_name_from_87);
        if (tmp_assign_source_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_88;
        PyObject *tmp_name_value_88;
        PyObject *tmp_globals_arg_value_88;
        PyObject *tmp_locals_arg_value_88;
        PyObject *tmp_fromlist_value_88;
        PyObject *tmp_level_value_88;
        tmp_name_value_88 = mod_consts[194];
        tmp_globals_arg_value_88 = (PyObject *)moduledict_sqlalchemy$sql$expression;
        tmp_locals_arg_value_88 = Py_None;
        tmp_fromlist_value_88 = mod_consts[195];
        tmp_level_value_88 = mod_consts[196];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 182;
        tmp_import_name_from_88 = IMPORT_MODULE5(tstate, tmp_name_value_88, tmp_globals_arg_value_88, tmp_locals_arg_value_88, tmp_fromlist_value_88, tmp_level_value_88);
        if (tmp_import_name_from_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_88)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_88,
                (PyObject *)moduledict_sqlalchemy$sql$expression,
                mod_consts[197],
                mod_consts[13]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts[197]);
        }

        Py_DECREF(tmp_import_name_from_88);
        if (tmp_assign_source_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[198]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[199];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_93 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[201]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[202];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 190;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_94 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[204]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[205];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_95 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[206]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[207];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[179]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[206]);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = mod_consts[209];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_97 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[206]);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = mod_consts[211];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_98 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[213]);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = mod_consts[214];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 197;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_99 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_13);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = mod_consts[215];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_100 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_assign_source_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[167]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[217]);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = mod_consts[218];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_101 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_20;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[220]);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_20 = mod_consts[221];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_102 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[177]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[177]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[223];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assign_source_103 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
        }

        if (tmp_assign_source_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[225];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_104 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
        }

        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[227];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_assign_source_105 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
        }

        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[103]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = mod_consts[229];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_assign_source_106 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
        }

        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = mod_consts[231];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30};
            tmp_assign_source_107 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_15, call_args);
        }

        if (tmp_assign_source_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_16;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_32 = mod_consts[233];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_assign_source_108 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_16, call_args);
        }

        if (tmp_assign_source_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_34 = mod_consts[235];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 207;
        {
            PyObject *call_args[] = {tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_assign_source_109 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_17, call_args);
        }

        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_36;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[206]);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_36 = mod_consts[237];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_35, tmp_args_element_value_36};
            tmp_assign_source_110 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_args_element_value_35);
        if (tmp_assign_source_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_args_element_value_38;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[187]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[187]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = mod_consts[239];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 209;
        {
            PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
            tmp_assign_source_111 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_19, call_args);
        }

        if (tmp_assign_source_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_args_element_value_40;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = mod_consts[241];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = {tmp_args_element_value_39, tmp_args_element_value_40};
            tmp_assign_source_112 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_20, call_args);
        }

        if (tmp_assign_source_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_args_element_value_41 == NULL)) {
            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = mod_consts[243];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 211;
        {
            PyObject *call_args[] = {tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_21, call_args);
        }

        if (tmp_assign_source_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_44;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[245]);
        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_44 = mod_consts[246];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_assign_source_114 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_22, call_args);
        }

        Py_DECREF(tmp_args_element_value_43);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_46;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[248]);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_46 = mod_consts[249];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_assign_source_115 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_args_element_value_45);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_called_value_24;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_48;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[251]);
        if (tmp_args_element_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_48 = mod_consts[252];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_47, tmp_args_element_value_48};
            tmp_assign_source_116 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_args_element_value_47);
        if (tmp_assign_source_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_50;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[254]);
        if (tmp_args_element_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_50 = mod_consts[255];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_49, tmp_args_element_value_50};
            tmp_assign_source_117 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_25, call_args);
        }

        Py_DECREF(tmp_args_element_value_49);
        if (tmp_assign_source_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[256], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_26;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_52;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[257]);
        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_52 = mod_consts[258];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_51, tmp_args_element_value_52};
            tmp_assign_source_118 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_args_element_value_51);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_54;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[133]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[260]);
        if (tmp_args_element_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_54 = mod_consts[261];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_value_53, tmp_args_element_value_54};
            tmp_assign_source_119 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_args_element_value_53);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_called_value_28;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_args_element_value_56;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_55 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_args_element_value_55 == NULL)) {
            tmp_args_element_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_args_element_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_56 = mod_consts[263];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 228;
        {
            PyObject *call_args[] = {tmp_args_element_value_55, tmp_args_element_value_56};
            tmp_assign_source_120 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_28, call_args);
        }

        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_58;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[265]);
        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_58 = mod_consts[266];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 229;
        {
            PyObject *call_args[] = {tmp_args_element_value_57, tmp_args_element_value_58};
            tmp_assign_source_121 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_29, call_args);
        }

        Py_DECREF(tmp_args_element_value_57);
        if (tmp_assign_source_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[267]);

        if (unlikely(tmp_assign_source_122 == NULL)) {
            tmp_assign_source_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[267]);
        }

        assert(!(tmp_assign_source_122 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[268], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_60;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[269]);
        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_60 = mod_consts[270];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 233;
        {
            PyObject *call_args[] = {tmp_args_element_value_59, tmp_args_element_value_60};
            tmp_assign_source_123 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_args_element_value_59);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[271]);

        if (unlikely(tmp_assign_source_124 == NULL)) {
            tmp_assign_source_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[271]);
        }

        assert(!(tmp_assign_source_124 == NULL));
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_element_value_62;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[273]);
        if (tmp_args_element_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_62 = mod_consts[274];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 237;
        {
            PyObject *call_args[] = {tmp_args_element_value_61, tmp_args_element_value_62};
            tmp_assign_source_125 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_args_element_value_61);
        if (tmp_assign_source_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_64;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[276]);
        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_64 = mod_consts[277];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_63, tmp_args_element_value_64};
            tmp_assign_source_126 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_32, call_args);
        }

        Py_DECREF(tmp_args_element_value_63);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_66;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[279]);
        if (tmp_args_element_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_66 = mod_consts[280];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = {tmp_args_element_value_65, tmp_args_element_value_66};
            tmp_assign_source_127 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_33, call_args);
        }

        Py_DECREF(tmp_args_element_value_65);
        if (tmp_assign_source_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_67 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_args_element_value_67 == NULL)) {
            tmp_args_element_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_args_element_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_68 = mod_consts[282];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_67, tmp_args_element_value_68};
            tmp_assign_source_128 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_34, call_args);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_70;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[284]);
        if (tmp_args_element_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_70 = mod_consts[285];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 243;
        {
            PyObject *call_args[] = {tmp_args_element_value_69, tmp_args_element_value_70};
            tmp_assign_source_129 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_35, call_args);
        }

        Py_DECREF(tmp_args_element_value_69);
        if (tmp_assign_source_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_72;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[284]);
        if (tmp_args_element_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_72 = mod_consts[287];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_71, tmp_args_element_value_72};
            tmp_assign_source_130 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_args_element_value_71);
        if (tmp_assign_source_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_74;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[284]);
        if (tmp_args_element_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_74 = mod_consts[289];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 245;
        {
            PyObject *call_args[] = {tmp_args_element_value_73, tmp_args_element_value_74};
            tmp_assign_source_131 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_args_element_value_73);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_76;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[291]);
        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_76 = mod_consts[292];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = {tmp_args_element_value_75, tmp_args_element_value_76};
            tmp_assign_source_132 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_args_element_value_75);
        if (tmp_assign_source_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_args_element_value_78;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[151]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[294]);
        if (tmp_args_element_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_78 = mod_consts[295];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = {tmp_args_element_value_77, tmp_args_element_value_78};
            tmp_assign_source_133 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_args_element_value_77);
        if (tmp_assign_source_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_called_value_40;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_args_element_value_80;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_79 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_value_79 == NULL)) {
            tmp_args_element_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
        }

        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_80 = mod_consts[297];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_79, tmp_args_element_value_80};
            tmp_assign_source_134 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_40, call_args);
        }

        if (tmp_assign_source_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_args_element_value_82;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_81 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_args_element_value_81 == NULL)) {
            tmp_args_element_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_82 = mod_consts[299];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_81, tmp_args_element_value_82};
            tmp_assign_source_135 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_41, call_args);
        }

        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_42;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_83 == NULL)) {
            tmp_args_element_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
        }

        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = mod_consts[301];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_83, tmp_args_element_value_84};
            tmp_assign_source_136 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_42, call_args);
        }

        if (tmp_assign_source_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_args_element_value_86;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[197]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[197]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_args_element_value_85 == NULL)) {
            tmp_args_element_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_args_element_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_86 = mod_consts[303];
        frame_526497d721b75e13a8dd38bc0ff8320a->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_85, tmp_args_element_value_86};
            tmp_assign_source_137 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_43, call_args);
        }

        if (tmp_assign_source_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assign_source_138 == NULL)) {
            tmp_assign_source_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assign_source_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[305], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_assign_source_139 == NULL)) {
            tmp_assign_source_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[41]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_assign_source_140 == NULL)) {
            tmp_assign_source_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_assign_source_141 == NULL)) {
            tmp_assign_source_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
        }

        if (tmp_assign_source_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_assign_source_142 == NULL)) {
            tmp_assign_source_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_assign_source_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[309], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_assign_source_143 == NULL)) {
            tmp_assign_source_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
        }

        if (tmp_assign_source_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_assign_source_144 == NULL)) {
            tmp_assign_source_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
        }

        if (tmp_assign_source_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[311], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assign_source_145 == NULL)) {
            tmp_assign_source_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        if (tmp_assign_source_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[93]);

        if (unlikely(tmp_assign_source_146 == NULL)) {
            tmp_assign_source_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
        }

        if (tmp_assign_source_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_assign_source_147 == NULL)) {
            tmp_assign_source_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[91]);
        }

        if (tmp_assign_source_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_assign_source_148 == NULL)) {
            tmp_assign_source_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_assign_source_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[315], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assign_source_149 == NULL)) {
            tmp_assign_source_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
        }

        if (tmp_assign_source_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_149);
    }
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_assign_source_150 == NULL)) {
            tmp_assign_source_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_assign_source_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[317], tmp_assign_source_150);
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_assign_source_151 == NULL)) {
            tmp_assign_source_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[81]);
        }

        if (tmp_assign_source_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_151);
    }
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_assign_source_152 == NULL)) {
            tmp_assign_source_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[97]);
        }

        if (tmp_assign_source_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_152);
    }
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assign_source_153 == NULL)) {
            tmp_assign_source_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_assign_source_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_assign_source_154 == NULL)) {
            tmp_assign_source_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
        }

        if (tmp_assign_source_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_assign_source_155 == NULL)) {
            tmp_assign_source_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
        }

        if (tmp_assign_source_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[141]);

        if (unlikely(tmp_assign_source_156 == NULL)) {
            tmp_assign_source_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
        }

        if (tmp_assign_source_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_assign_source_157 == NULL)) {
            tmp_assign_source_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
        }

        if (tmp_assign_source_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_157);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_526497d721b75e13a8dd38bc0ff8320a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_526497d721b75e13a8dd38bc0ff8320a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_526497d721b75e13a8dd38bc0ff8320a, exception_lineno);
    }



    assertFrameObject(frame_526497d721b75e13a8dd38bc0ff8320a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("sqlalchemy.sql.expression", false);

    Py_INCREF(module_sqlalchemy$sql$expression);
    return module_sqlalchemy$sql$expression;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_sqlalchemy$sql$expression, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("sqlalchemy$sql$expression", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
