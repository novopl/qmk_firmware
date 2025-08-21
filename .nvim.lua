local map = function (keys, desc, func)
    vim.keymap.set('n', keys, func, { desc = desc })
end

map('<F5>', 'Upload firmware (jotpeee',
    ':!qmk --no-color flash -kb sofle_choc -km novopl && qmk --no-color flash -kb sofle_choc -km novopl<CR>')

map('<F6>', 'Upload firmware (jotpeee)',
    ':!qmk --no-color flash -kb sofle_choc -km jotpeee && qmk --no-color flash -kb sofle_choc -km jotpeee<CR>')


require('plugins.marks').set_global_marks({
    {mark = 'T', file = 'keyboards/sofle_choc/keymaps/novopl/keymap.c' },
    {mark = 'S', file = 'keyboards/sofle_choc/keymaps/novopl/config.h' },
    {mark = 'R', file = 'keyboards/sofle_choc/keymaps/novopl/rules.mk' },
})
