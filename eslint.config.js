/** @type {import('eslint').Linter.Config[]} */
module.exports = [
    {
        files: ['src/pkjs/**/*.js'],
        languageOptions: {
            ecmaVersion: 2020,
            globals: {
                // Pebble JS runtime globals
                Pebble: 'readonly',
                localStorage: 'readonly',
                XMLHttpRequest: 'readonly',
                crypto: 'readonly',
                require: 'readonly',
                module: 'readonly',
                console: 'readonly',
                Date: 'readonly',
                JSON: 'readonly',
                Math: 'readonly',
                parseInt: 'readonly',
                parseFloat: 'readonly',
                encodeURIComponent: 'readonly',
                decodeURIComponent: 'readonly',
                setTimeout: 'readonly',
                alert: 'readonly',
            },
        },
        rules: {
            'no-unused-vars': ['error', { varsIgnorePattern: '^_', argsIgnorePattern: '^_', caughtErrorsIgnorePattern: '^_' }],
            'no-undef': 'error',
            'eqeqeq': ['error', 'always'],
            'no-var': 'error',
            'prefer-const': 'error',
        },
    },
];
