"vimrc file for vim editor page will looks like colour full"

filetype plugin indent on 

color molokai
if has("syntax")
	syntax on
endif 
inoremap " ""<Esc>ha
inoremap ' ''<left>
inoremap ( ()<left>
inoremap { {}<left>
inoremap [ []<left>
inoremap {<CR> {<CR>}<ESC>o<TAB>
inoremap {;<CR> {<CR>};<ESC>o<TAB>
inoremap #i #include<stdio.h><CR>int main()<CR>{<cr>}<up><cr> 
inoremap #d #define symbl 
inoremap ## #!/bin/sh  
"inoremap if if( )<CR>{<CR><CR><CR>}  	
inoremap ? %<right><left>
inoremap % ?<right><left>
inoremap ?? &<right><left>
inoremap CC <Esc>:wq
inoremap XXX <Esc>:q!
"set nu rnu
"":highlight CursorLineNR  ctermbg=green ctermfg=red
:hi CursorLine   cterm=NONE ctermbg=darkblue ctermfg=white guibg=darkred guifg=white
":hi CursorColumn cterm=NONE ctermbg=darkred ctermfg=blue guibg=darkred guifg=darkblue
augroup CursorLine
  au!
  au vimEnter,insertEnter,BufwinEnter * setlocal cursorline
  au insertLeave * setlocal nocursorline
augroup END
:nnoremap <Leader>c :set cursorline! cursorcolumn!<CR>
:nnoremap <silent><Leader>l ml:execute 'match Search /\%'.line('.').'l/'<CR>
set cursorline
set incsearch



:set number

:augroup numbertoggle
:  autocmd!
:  autocmd BufEnter,FocusGained,InsertLeave,WinEnter * if &nu && mode() != "i" | set nu rnu   | endif
:  autocmd BufLeave,FocusLost,InsertEnter,WinLeave   * if &nu                  | set nornu | endif
:augroup END










