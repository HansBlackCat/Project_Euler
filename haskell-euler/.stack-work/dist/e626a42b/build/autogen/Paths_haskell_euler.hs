{-# LANGUAGE CPP #-}
{-# LANGUAGE NoRebindableSyntax #-}
{-# OPTIONS_GHC -fno-warn-missing-import-lists #-}
module Paths_haskell_euler (
    version,
    getBinDir, getLibDir, getDynLibDir, getDataDir, getLibexecDir,
    getDataFileName, getSysconfDir
  ) where

import qualified Control.Exception as Exception
import Data.Version (Version(..))
import System.Environment (getEnv)
import Prelude

#if defined(VERSION_base)

#if MIN_VERSION_base(4,0,0)
catchIO :: IO a -> (Exception.IOException -> IO a) -> IO a
#else
catchIO :: IO a -> (Exception.Exception -> IO a) -> IO a
#endif

#else
catchIO :: IO a -> (Exception.IOException -> IO a) -> IO a
#endif
catchIO = Exception.catch

version :: Version
version = Version [0,1,0,0] []
bindir, libdir, dynlibdir, datadir, libexecdir, sysconfdir :: FilePath

bindir     = "C:\\Users\\Hans\\Git\\Project_Euler\\haskell-euler\\.stack-work\\install\\abce8e4b\\bin"
libdir     = "C:\\Users\\Hans\\Git\\Project_Euler\\haskell-euler\\.stack-work\\install\\abce8e4b\\lib\\x86_64-windows-ghc-8.6.5\\haskell-euler-0.1.0.0-8IDMaJKHeEMJHnv9F9b6t7"
dynlibdir  = "C:\\Users\\Hans\\Git\\Project_Euler\\haskell-euler\\.stack-work\\install\\abce8e4b\\lib\\x86_64-windows-ghc-8.6.5"
datadir    = "C:\\Users\\Hans\\Git\\Project_Euler\\haskell-euler\\.stack-work\\install\\abce8e4b\\share\\x86_64-windows-ghc-8.6.5\\haskell-euler-0.1.0.0"
libexecdir = "C:\\Users\\Hans\\Git\\Project_Euler\\haskell-euler\\.stack-work\\install\\abce8e4b\\libexec\\x86_64-windows-ghc-8.6.5\\haskell-euler-0.1.0.0"
sysconfdir = "C:\\Users\\Hans\\Git\\Project_Euler\\haskell-euler\\.stack-work\\install\\abce8e4b\\etc"

getBinDir, getLibDir, getDynLibDir, getDataDir, getLibexecDir, getSysconfDir :: IO FilePath
getBinDir = catchIO (getEnv "haskell_euler_bindir") (\_ -> return bindir)
getLibDir = catchIO (getEnv "haskell_euler_libdir") (\_ -> return libdir)
getDynLibDir = catchIO (getEnv "haskell_euler_dynlibdir") (\_ -> return dynlibdir)
getDataDir = catchIO (getEnv "haskell_euler_datadir") (\_ -> return datadir)
getLibexecDir = catchIO (getEnv "haskell_euler_libexecdir") (\_ -> return libexecdir)
getSysconfDir = catchIO (getEnv "haskell_euler_sysconfdir") (\_ -> return sysconfdir)

getDataFileName :: FilePath -> IO FilePath
getDataFileName name = do
  dir <- getDataDir
  return (dir ++ "\\" ++ name)
